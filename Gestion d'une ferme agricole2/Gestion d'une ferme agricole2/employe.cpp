#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "employe.h"
#include <iomanip>
#include <fstream>
#include <sstream>


employe::employe()
{
}

istream& operator>> ( istream& in , employe& e )
{
	cout << "donnez nom = ";
	in >> e.nom;
	cout << "donnez prenom = ";
	in >> e.prenom;
	cout << "donnez code = ";
	in >> e.code;
	int accesnum; // numero d'acces 
	
	cout << "donnez l'acces pour cet employe\n ";
	cout << "1- Gestion des produits animals (Viande,Lait,Oeufs) \n";
	cout << "2- Gestion des animaux domestique \n";
	cout << "3- Gestion des produits vegetals(Legumes, Grains, Fruits) \n";
	cout << "4- Gestion des champs cultives \n";
	//cout << "5- Gestion des employes \n";
	cout << "6- Faire des commandes clients \n";
	cout << "7- Enregistrer une commande pour la ferme agricole \n";

	cin >> accesnum;

	while (true) 
	{
		if (accesnum == 1 || accesnum == 2 || accesnum == 3 || accesnum == 4 || accesnum == 6 || accesnum == 7) break;
		else cout << "saisie non valide, tapez de nouveau \n ";
		cin >> accesnum;
	}

	e.acces = accesnum;

	cout << "donnez salaire (en dinar) = ";
	in >> e.salaire;

	cout << "donnez duree de conge (en jours) = ";
	in >> e.conge;

	cout << "specifier le tache d'employe = ";
	
	cin.ignore(); // pour avoir e.tache ;
	getline( in , e.tache, '\n') ;

	return in;
}


ostream& operator<< (ostream& out, employe& e)
{
	out << setw(15) << e.nom << setw(15) << e.prenom << setw(15) << e.code << setw(15) << e.acces << setw(15) << e.salaire << setw(15) << e.conge << setw(30) << e.tache << '\n';
	return out;
}

//stockemploye
void stockemploye::openfile()
{
	fstream f;
	string numeros;
	f.open("D:employe.txt", ios::in | ios::out | ios::app);
	// si n'existe pas sera creé
	employe e;
	string tache;
	while (f >> e.nom)
	{
		f >> e.prenom;
		f >> e.code;
		f >> e.acces;
		f >> e.salaire;
		f >> e.conge;
		getline(f, e.tache);
		tab.push_back(e);
	}
	f.close();
}

void stockemploye::savefile()
{
	fstream f;
	f.open("D:employe.txt", ios::in | ios::out | ios::trunc);
	int i;
	for (i = 0; i < tab.size(); i++)
	{
		f << tab[i]; // ecriture des employes sur chaque ligne ;
	}
	f.close();
}



ostream& operator<< (ostream& out, stockemploye& st)
{
	int i;
	out << setw(15) << "nom" << setw(15) << "prenom" << setw(15) << "code" << setw(15) << "acces" << setw(15) << "salaire" << setw(15) << "conge" << setw(30) << "tache" << "\n";
	for (i = 0; i < st.tab.size(); i++)
	{
		cout << st.tab[i]; // ecriture des employes sur chaque ligne ;
		
	}
	return out;
}

void stockemploye::ajouteremploye()
{
	employe e;
	cin >> e;
	tab.push_back(e);
}

void stockemploye::supprimeremploye()
{
	string nom, prenom;
	cout << "entrez le nom et le prenom de l'employe qui vous voulez supprimer de la liste des employes : \n";
	cin >> nom >> prenom;
	
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].nom == nom && tab[i].prenom == prenom )
		{
			tab.erase(tab.begin() + i);
			return;
		}
	}

	cout << "employe non existant\n";
}

void stockemploye::modifieremploye()
{
	string nom, prenom;
	cout << "entrez le nom et le prenom de l'employe a modifier les donnees : \n";
	cin >> nom >> prenom;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].nom == nom && tab[i].prenom == prenom )
		{
			cout << " ****** entrez les changements ****** ";
			cin >> tab[i];
			return;
		}
	}
	cout << "employe non existant\n";
}


