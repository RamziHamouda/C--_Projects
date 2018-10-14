#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "domestiques.h"
#include <iomanip>
#include <fstream>
#include <sstream>

void main();

void gestiondomestiques()
{
	int y;
	stockdomestiques std;

	cout << " \n ******* Gestion Des Animaux Domestiques ****** \n";
	cout << "1- Afficher ce qui est disponbile\n";
	cout << "2- Ajouter/retirer nombre des animaux\n";
	cout << "3- Modifier les donnees sur les animaux\n";
	cout << "4- Ajouter un nouveau type d'animaux domestiques\n";
	cout << "5- Supprimer un type d'animaux domestiques de la liste\n";
	cout << "6- Retour au menu principal\n";
	cout << "7- Sortir\n";
	cin >> y;

	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6 && y != 7)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}

	if (y == 1)
	{
		std.openfile();
		cout << std;
		std.savefile();
		gestiondomestiques();
	}
	if (y == 2)
	{
		std.openfile();
		std.quantite();
		std.savefile();
		gestiondomestiques();
	}
	if (y == 3)
	{
		std.openfile();
		std.modifier();
		std.savefile();
		gestiondomestiques();
	}
	if (y == 4)
	{
		std.openfile();
		std.ajoutertype();
		std.savefile();
		gestiondomestiques();
	}
	if (y == 5)
	{
		std.openfile();
		std.supprimertype();
		std.savefile();
		gestiondomestiques();
	}
	if (y == 6)
	{
		main();
	}
	if (y == 7)
	{
		return;
	}
}


