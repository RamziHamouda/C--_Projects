#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "produit.h"
#include <iomanip>
#include <fstream>

istream& operator>> (istream& in, produit& v)
{
	cout << "donner type :  \n";
	in >> v.type;
	cout << "donner race : \n";
	in >> v.race;

	cout << "donner prix = \n";
	in >> v.prix;
	cout << "donner quantite = \n";
	in >> v.quantite;
	return in;
}

ostream& operator<< (ostream& out, produit& v)
{
	out << setw(30) << v.type << setw(30) << v.race << setw(30) << v.prix << setw(30) << v.quantite << '\n';
	return out;
}


//class stockproduit
stockproduit::stockproduit(string catégorie, string unité)
{
	this->catégorie = catégorie;
	this->unité = unité;
}

void stockproduit::openfile(string ch)
{
	fstream f;
	f.open(ch, ios::in | ios::out | ios::app);
	// si n'existe pas sera crié
	produit p;


	while (f >> p.type)
	{
		f >> p.race;
		f >> p.prix;
		f >> p.quantite;
		tab.push_back(p);
	}

	f.close();
}

void stockproduit::savefile(string ch)
{
	fstream f;
	f.open(ch, ios::out | ios::in | ios::trunc);
	for (int i = 0; i < tab.size(); i++)
	{
		f << tab[i];
	}
	f.close();
}

ostream& operator<< (ostream& out, stockproduit& st)
{
	out << setw(30) << st.catégorie << " : type " << setw(20) << " race/variete " << setw(30) << "prix d'un " << st.unité << " (DT)"<< setw(30) << "quantite" << '\n';
	
	for (int i = 0; i < st.tab.size(); i++)
	{
		out << st.tab[i];
	}
	return out;
}

void stockproduit::ajoutertype()
{
	produit v;
	cout << "donnez type de " << catégorie << " : ";
	cin >> v.type;
	cout << "donnez race/variete : ";
	cin >> v.race;
	cout << "donnez prix d'un " << unité << " en DT\n";
	cin >> v.prix;
	cout << "donnez quantite ajoutee en KG: ";
	cin >> v.quantite;
	tab.push_back(v);
}

void stockproduit::supprimertype()
{
	string type, race;
	cout << "entrez le type et race de la catégorie " << catégorie << " a supprimer du stock : \n";
	cin >> type;
	cin >> race;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].type == type && tab[i].race == race)
		{
			tab.erase(tab.begin() + i);
			return;
		}
	}
	cout << "type non existant en stock\n";
}

void stockproduit::modifier()
{
	string type, race;
	cout << "entrez le type et race de la categorie " << catégorie << "a modifier : \n";

	cin >> type;
	cin >> race;

	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].type == type && tab[i].race == race)
		{
			cout << " ****** entrez les changements ****** \n";
			cin >> tab[i];
			return;
		}
	}
	cout << "type non existant en stock\n";
}

void stockproduit::quantite()
{
	string type, race;
	float quantite;
	cout << "entrez le type et race de la categorie " << catégorie << "a modifier la quantite : \n";
	cin >> type;
	cin >> race;
	cout << "donnez la quantite en " << unité << "pour ajouter(signe+)/retirer(singe-) du stock : \n";
	cin >> quantite;
	for (int i = 0; i < tab.size(); i++)
	{

		if (tab[i].type == type && tab[i].race == race)
		{
			tab[i].quantite += quantite;
			if (tab[i].quantite < 0) tab[i].quantite = 0;
			return;
		}
	}
	cout << "type non existant en stock\n";
}
