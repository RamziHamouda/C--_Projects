#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "fournisseur.h"
#include "produit.h"
#include <iomanip>
#include <fstream>
#include <sstream>

void main();

void gestionfournisseur()
{
	int y;
	stockcommande ste;

	cout << " \n ****** Gestion Des Commandes D'apres Des Fournisseur Pour La ferme ****** \n";
	cout << "tapez numero convenable: \n";
	cout << "1- Afficher les commandes\n";
	cout << "2- Ajouter une commande \n";
	cout << "3- Supprimer une commande \n";
	cout << "4- Retour au menu principal\n";
	cout << "5- Sortir\n";
	cin >> y;

	while (y != 1 && y != 2 && y != 3 && y != 4)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}

	if (y == 1)
	{
		ste.openfile();
		cout << ste;
		ste.savefile();
		gestionfournisseur();
	}
	if (y == 2)
	{
		ste.openfile();
		ste.ajoutercommande();
		ste.savefile();
		gestionfournisseur();
	}
	if (y == 3)
	{
		ste.openfile();
		ste.supprimercommande();
		ste.savefile();
		gestionfournisseur();
	}
	if (y == 4)
	{
		main();
	}
	if (y == 5)
	{
		return;
	}
}