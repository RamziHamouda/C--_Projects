#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "employe.h"
#include "produit.h"
#include <iomanip>
#include <fstream>
#include <sstream>

void main();

void gestionanimal();
void gestionvegetal();
void gestionemploye();
void gestiondomestiques();
void gestionchamps();
void gestioncommandeclient1(); //pour administrateur et employes;
void gestioncommandeclient2(); // pour le client
void gestionfournisseur();

const int code = 1234;

void mainadministrateur()
{
debut: cout << "\n";
	int x;
	cout << "tapez sur numero convenable :\n";
	cout << "1 - Pour entrer code d'administration\n ";
	cout << "2 - Retour \n";
	cin >> x;

	while (x != 1 && x != 2)
	{
		cout << "entre non valide, tapez de nouveau\n";
		cout << "1 - Pour entrer code d'administration\n ";
		cout << "2 - Retour \n";
		cin >> x;
	}

	if (x == 2)
	{
		main();
	}
	if (x == 1)
	{
		int c;
		cout << "Tapez le code : ";
		cin >> c;
		if (c != code)
		{
			goto debut;
		}
	}
	
		
	cout << "Entrez numero convenable : \n";
	cout << "1 - Gestion des produits animals (Viande,Lait,Oeufs)\n";
	cout << "2 - Gestion des animaux domestique\n";
	cout << "3 - Gestion des produits vegetals(Legumes, Grains, Fruits)\n";
	cout << "4 - Gestion des champs cultives\n";
	cout << "5 - Gestion des employes\n";
	cout << "6 - Gestion des commandes clients\n";
	cout << "7 - Enregistrer une commande pour la ferme agricole\n";
	cout << "8 - Retour au menu principal\n";
	cout << "9 - Sortir\n";


	cin >> x;

	while (x != 1 && x != 2 && x != 3 && x != 4  && x != 5 && x != 6 && x!=7 && x!= 8 && x != 9)
	{
		cout << "numero entre non valide \n";
		cin >> x;
	}
	
	if (x == 1)
	{
		gestionanimal();
	}
	if (x == 2)
	{
		gestiondomestiques();
	}
	if (x == 3)
	{
		gestionvegetal();
	}
	if (x == 4)
	{    
		gestionchamps();
	}
	if (x == 5)
	{
		gestionemploye();
	}
	
	if (x == 6)
	{
		gestioncommandeclient1();
	}
	if (x == 7)
	{
		gestionfournisseur();
	}
	if (x == 8)
	{
		main();
	}
	if (x == 9)
	{
		return;
	}
}


void mainemploye()
{
	employe e;
	stockemploye ste;
	int i;
	string nom, prenom;
	int code, acces;
	int indice = -1;

	ste.openfile();

	
	cout << "entrez nom et prenom : ";
	cin >> nom >> prenom;

	cout << "donnez code : ";
	cin >> code;


	for (i = 0; i < ste.tab.size(); i++)
	{
		if (ste.tab[i].nom == nom && ste.tab[i].prenom == prenom && ste.tab[i].code == code)
		{
			indice = i; break;
		}
	}
	if (indice == -1)
	{
		cout << "non trouve dans la liste des employes \n";
		ste.savefile();
		main() ; 
	}
	else
	{
		ste.savefile();
		cout << "tapez numero convenable : \n";
		if (ste.tab[indice].acces == 1)
		{
			cout << "1 - Gestion des produits animals (Viande,Lait,Oeufs)\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}
		if (ste.tab[indice].acces == 2)
		{
			cout << "2 - Gestion des animaux domestique\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}

		if (ste.tab[indice].acces == 3)
		{
			cout << "3 - Gestion des produits vegetals(Legumes, Grains, Fruits)\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}
		if (ste.tab[indice].acces == 4)
		{
			cout << "4 - Gestion des champs cultives\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}

		if (ste.tab[indice].acces == 6)
		{
			cout << "6 - Gestion des commandes clients\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}
		if (ste.tab[indice].acces == 7)
		{
			cout << "7 - Enregistrer une commande pour la ferme agricole\n";
			cout << "0 - Retour au menu principal\n";
			cout << "-1 - Sortir\n";
			cin >> acces;
		}
		if (acces == 0)
		{
			main();
		}
		else if (acces == -1)
		{
			//return;
		}
		else
		{
			if (acces == 1)
			{
				gestionanimal();
			}
			if (acces == 2)
			{
				gestiondomestiques();
			}
			if (acces == 3)
			{
				gestionvegetal();
			}
			if (acces == 4)
			{
				gestionchamps();
			}
			if (acces == 6)
			{
				gestioncommandeclient1();
			}
			if (acces == 7)
			{
				gestionfournisseur();
			}
		}
	}
}


void mainclient()
{
	gestioncommandeclient2();
}







