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
void gestionvegetal();

void gestionlegumes()
{
	stockproduit stlegume("legume", "1kg");
	int y;

	cout << "\n **** Gestion legumes **** \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits vegetals \n";
	cout << "7- Retour au menu principal\n";
	cout << "8- Sortir\n";

	cin >> y;
	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6 && y != 7 && y != 8)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}
	if (y == 1)
	{
		stlegume.openfile("D:legume.txt");
		cout << stlegume;
		stlegume.savefile("D:legume.txt");
		gestionlegumes();
	}
	if (y == 2)
	{
		stlegume.openfile("D:legume.txt");
		stlegume.quantite();
		stlegume.savefile("D:legume.txt");
		gestionlegumes();
	}
	if (y == 3)
	{
		stlegume.openfile("D:legume.txt");
		stlegume.modifier();
		stlegume.savefile("D:legume.txt");
		gestionlegumes();
	}
	if (y == 4)
	{
		stlegume.openfile("D:legume.txt");
		stlegume.ajoutertype();
		stlegume.savefile("D:legume.txt");
		gestionlegumes();
	}
	if (y == 5)
	{
		stlegume.openfile("D:legume.txt");
		stlegume.supprimertype();
		stlegume.savefile("D:legume.txt");
		gestionlegumes();
	}
	if (y == 6)
	{
		gestionvegetal();
	}
	if (y == 7)
	{
		main();
	}
	if (y == 8)
	{
		return;
	}
}

void gestiongrains()
{
	int y;
	stockproduit stgrains("grains", "1kg");

	cout << " \n ******* Gestion Grains ****** \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits vegetals \n";
	cout << "7- Retour au menu principal\n";
	cout << "8- Sortir\n";

	cin >> y;
	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6 && y != 7 && y != 8)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}
	if (y == 1)
	{
		stgrains.openfile("D:grains.txt");
		cout << stgrains;
		stgrains.savefile("D:grains.txt");
		gestiongrains();
	}
	if (y == 2)
	{
		stgrains.openfile("D:grains.txt");
		stgrains.quantite();
		stgrains.savefile("D:grains.txt");
		gestiongrains();
	}
	if (y == 3)
	{
		stgrains.openfile("D:grains.txt");
		stgrains.modifier();
		stgrains.savefile("D:grains.txt");
		gestiongrains();
	}
	if (y == 4)
	{
		stgrains.openfile("D:grains.txt");
		stgrains.ajoutertype();
		stgrains.savefile("D:grains.txt");
		gestiongrains();
	}
	if (y == 5)
	{
		stgrains.openfile("D:grains.txt");
		stgrains.supprimertype();
		stgrains.savefile("D:grains.txt");
		gestiongrains();
	}
	if (y == 6)
	{
		gestionvegetal();
	}
	if (y == 7)
	{
		main();
	}
	if (y == 8)
	{
		return;
	}
}

void gestionfruits()
{
	stockproduit stfruit("fruit", "1kg");
	int y;

	cout << "\n ****** Gestion fruits ******* \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits vegetals \n";
	cout << "7- Retour au menu principal\n";
	cout << "8- Sortir\n";

	cin >> y;
	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6 && y != 7 && y != 8)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}
	if (y == 1)
	{
		stfruit.openfile("D:fruit.txt");
		cout << stfruit;
		stfruit.savefile("D:fruit.txt");
		gestionfruits();
	}
	if (y == 2)
	{
		stfruit.openfile("D:fruit.txt");
		stfruit.quantite();
		stfruit.savefile("D:fruit.txt");
		gestionfruits();
	}
	if (y == 3)
	{
		stfruit.openfile("D:fruit.txt");
		stfruit.modifier();
		stfruit.savefile("D:fruit.txt");
		gestionfruits();
	}
	if (y == 4)
	{
		stfruit.openfile("D:fruit.txt");
		stfruit.ajoutertype();
		stfruit.savefile("D:fruit.txt");
		gestionfruits();
	}
	if (y == 5)
	{
		stfruit.openfile("D:fruit.txt");
		stfruit.supprimertype();
		stfruit.savefile("D:fruit.txt");
		gestionfruits();
	}
	if (y == 6)
	{
		gestionvegetal();
	}
	if (y == 7)
	{
		main();
	}
	if (y == 8)
	{
		return;
	}
}


void gestionvegetal()
{
	
	int x, y;

	cout << " \n ***** Gestion Des Produits Vegetals ***** \n";
	cout << "Choisir numero convenable:\n";
	cout << "1- Gestion legumes\n";
	cout << "2- Gestion grains\n";
	cout << "3- Gestion fruits\n";
	cout << "4- Retour au menu principal\n";
	cout << "5- Sortir\n";
	cin >> x;

	while (x != 1 && x != 2 && x != 3 && x != 4 && x != 5)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> x;
	}

	// Gestion Legume ;
	if (x == 1)
	{
		gestionlegumes();
	}

	// Gestion des grains
	if (x == 2)
	{
		gestiongrains();
	}

	// Gestion fruit
	if (x == 3)
	{
		gestionfruits();
		
	}
	if (x == 4)
	{
		main();
	}

	// if ( x ==5)
}