#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "domestiques.h"
#include <iomanip>
#include <fstream>
#include <cstring>

istream& operator>> (istream& in, domestiques& v)
{
	cout << "donner type :  \n";
	in >> v.type;
	cout << "donner race : \n";
	in >> v.race;

	cout << "donner prix (DT/KG) = \n";
	in >> v.prix;
	cout << "donner nombre des animaux de cet categorie = \n";
	in >> v.quantite;
	return in;
}
ostream& operator<< (ostream& out, domestiques& v)
{
	out << setw(30) << v.type << setw(30) << v.race << setw(30) << v.prix << setw(30) << v.quantite << '\n';
	return out;
}


//class stockdomestiques
void stockdomestiques::openfile( )
{
	fstream f;
	f.open("D:domestiques.txt", ios::in | ios::out | ios::app);
	// si n'existe pas sera crié
	domestiques p;


	while (f >> p.type)
	{
		f >> p.race;
		f >> p.prix;
		f >> p.quantite;
		tab.push_back(p);
	}

	f.close();
}

void stockdomestiques::savefile()
{
	fstream f;
	f.open("D:domestiques.txt", ios::in | ios::out | ios::trunc);
	for (int i = 0; i < tab.size(); i++)
	{
		f << tab[i];
	}
	f.close();
}

ostream& operator<< (ostream& out, stockdomestiques& st)
{
	out << setw(30) << " type " << setw(30) << " race " << setw(30) << "prix en DT/kg" << setw(30) << "nombre" << '\n';
	for (int i = 0; i < st.tab.size(); i++)
	{
		out << st.tab[i];
	}
	return out;
}

void stockdomestiques::ajoutertype()
{
	domestiques v;
	cin >> v;
	tab.push_back(v);
}

void stockdomestiques::supprimertype()
{
	string type, race;
	cout << "entrez le type et race de la categorie a supprimer du stock : \n";
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

void stockdomestiques::modifier()
{
	string type, race;
	cout << "entrez le type et race de la categorie a modifier : \n";

	cin >> type;
	cin >> race;

	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].type == type && tab[i].race == race)
		{
			cout << " ****** entrez les changements ****** ";
			cin >> tab[i];
			return;
		}
	}
	cout << "type non existant en stock\n";
}

void stockdomestiques::quantite()
{
	string type, race;
	float quantite;
	cout << "entrez le type et race de la categorie a modifier la quantite : \n";
	cin >> type;
	cin >> race;
	cout << "donnez le poids pour ajouter(signe+)/retirer(singe-)  : \n";
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
