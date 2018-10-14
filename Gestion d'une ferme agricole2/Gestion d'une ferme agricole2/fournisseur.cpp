#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "fournisseur.h"
#include <iomanip>
#include <fstream>
#include <sstream>



istream& operator>> (istream& in, commandefournisseur& e)
{
	cout << "donnez nom du fournisseur (personne ou entreprise) = ";
	in >> e.fournisseur;
	


	cout << "specifier l'achat voulu pour la ferme = ";

	cin.ignore(); // pour avoir e.tache ;
	getline(in, e.commande , '\n');

	return in;
}


ostream& operator<< (ostream& out, commandefournisseur& e)
{
	out << setw(30) << e.fournisseur << setw(60) << e.commande << "\n";
	return out;
}

//stockemploye
void stockcommande::openfile()
{
	fstream f;
	string numeros;
	f.open("D:commandefournisseur.txt", ios::in | ios::out | ios::app);
	// si n'existe pas sera crié
	commandefournisseur e;
	string tache;
	while (f >> e.fournisseur)
	{
		getline(f, e.commande);
		tab.push_back(e);
	}
	f.close();
}

void stockcommande::savefile()
{
	fstream f;
	f.open("D:commandefournisseur.txt", ios::in | ios::out | ios::trunc);
	int i;
	for (i = 0; i < tab.size(); i++)
	{
		f << tab[i]; // ecriture des employes sur chaque ligne ;
	}
	f.close();
}



ostream& operator<< (ostream& out, stockcommande& st)
{
	int i;
	out << setw(30) << "fournisseur" << setw(60) << "commande" << "\n";
	for (i = 0; i < st.tab.size(); i++)
	{
		cout << st.tab[i]; // ecriture des commandes sur chaque ligne ;

	}
	return out;
}

void stockcommande::ajoutercommande()
{
	commandefournisseur e;
	cin >> e;
	tab.push_back(e);
}

void stockcommande::supprimercommande()
{
	string fournisseur;
	cout << "entrez le fournisseur que voulez supprimer la commande pour lui  : \n";
	cin >> fournisseur;

	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].fournisseur == fournisseur )
		{
			tab.erase(tab.begin() + i);
			return;
		}
	}

	cout << "employe non existant\n";
}