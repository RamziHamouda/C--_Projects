#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "commandeclient.h"
#include "produit.h"
#include "domestiques.h";
#include <iomanip>
#include <fstream>
#include <sstream>

void main();

void gestioncommandeclient1()
{
	int x;
	tableaucommande t;

	cout << " \n ****** Commandes Clients ****** \n";
	cout << "choisir numero convenable: \n";
	cout << "1- Ajouter une commande client \n";
	cout << "2- Afficher les commandes clients \n";
	cout << "3- Retour au menu principal \n";
	cout << "4- Sortir \n";

	cin >> x;

	if (x == 1)
	{
		t.openfile();
		t.ajoutercommande();
		t.savefile();
		gestioncommandeclient1();
	}
	if (x == 2)
	{
		t.openfile();
		t.affichercommande();
		t.savefile();
		gestioncommandeclient1();
	}
	if (x == 3)
	{
		main();
	}
	if (x == 4)
	{
		return;
	}
}

void gestioncommandeclient2()
{
	int x;
	tableaucommande t;


	cout << " \n ****** Commandes Clients ****** \n";
	cout << "choisir numero convenabel: \n";
	cout << "1- Entrer une commande client \n";
	cout << "2- Retour au menu principal \n";
	cout << "3- Sortir \n";

	cin >> x;

	if (x == 1)
	{
		t.openfile();
		t.ajoutercommande();
		t.savefile();
		gestioncommandeclient2();
	}
	if (x == 2)
	{
		main();
	}
	if (x == 3)
	{
		return;
	}
}


