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

void gestionviande()
{
	stockproduit stviande("viande", "1kg");
	int y;

	cout.width(20);

	cout << " \n ****** Gestion Viande  ******* \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits animals \n";
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
		stviande.openfile("D:viande.txt");
		cout << stviande;
		stviande.savefile("D:viande.txt");
		gestionviande();
	}
	if (y == 2)
	{
		stviande.openfile("D:viande.txt");
		stviande.quantite();
		stviande.savefile("D:viande.txt");
		gestionviande();
	}
	if (y == 3)
	{
		stviande.openfile("D:viande.txt");
		stviande.modifier();
		stviande.savefile("D:viande.txt");
		gestionviande();
	}
	if (y == 4)
	{
		stviande.openfile("D:viande.txt");
		stviande.ajoutertype();
		stviande.savefile("D:viande.txt");
		gestionviande();
	}
	if (y == 5)
	{
		stviande.openfile("D:viande.txt");
		stviande.supprimertype();
		stviande.savefile("D:viande.txt");
		gestionviande();
	}
	if (y == 6)
	{
		gestionanimal();
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

void gestionlait()
{
	int y;
	stockproduit stlait("lait", "Litre");
	cout << " \n ****** Gestion Lait  ******* \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits animals \n";
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
		stlait.openfile("D:lait.txt");
		cout << stlait;
		stlait.savefile("D:lait.txt");
		gestionlait();
	}
	if (y == 2)
	{
		stlait.openfile("D:lait.txt");
		stlait.quantite();
		stlait.savefile("D:lait.txt");
		gestionlait();
	}
	if (y == 3)
	{
		stlait.openfile("D:lait.txt");
		stlait.modifier();
		stlait.savefile("D:lait.txt");
		gestionlait();
	}
	if (y == 4)
	{
		stlait.openfile("D:lait.txt");
		stlait.ajoutertype();
		stlait.savefile("D:lait.txt");
		gestionlait();
	}
	if (y == 5)
	{
		stlait.openfile("D:lait.txt");
		stlait.supprimertype();
		stlait.savefile("D:lait.txt");
		gestionlait();
	}
	if (y == 6)
	{
		gestionanimal();
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

void gestionoeufs()
{
	stockproduit stoeufs("oeufs", "Plateau");

	int y;

	cout << " \n ****** Gestion Des Oeufs  ******* \n";
	cout << "1- Afficher ce qui est disponbile en stock\n";
	cout << "2- Ajouter/retirer quantite\n";
	cout << "3- Modifier les donnees\n";
	cout << "4- Ajouter un nouveau type\n";
	cout << "5- Supprimer un type de la liste\n";
	cout << "6- Retour menu gestions des produits animals \n";
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
		stoeufs.openfile("D:oeufs.txt");
		cout << stoeufs;
		stoeufs.savefile("D:oeufs.txt");
		gestionoeufs();
	}

	if (y == 2)
	{
		stoeufs.openfile("D:oeufs.txt");
		stoeufs.quantite();
		stoeufs.savefile("D:oeufs.txt");
		gestionoeufs();
	}
	if (y == 3)
	{
		stoeufs.openfile("D:oeufs.txt");
		stoeufs.modifier();
		stoeufs.savefile("D:oeufs.txt");
		gestionoeufs();
	}
	if (y == 4)
	{
		stoeufs.openfile("D:oeufs.txt");
		stoeufs.ajoutertype();
		stoeufs.savefile("D:oeufs.txt");
		gestionoeufs();
	}
	if (y == 5)
	{
		stoeufs.openfile("D:oeufs.txt");
		stoeufs.supprimertype();
		stoeufs.savefile("D:oeufs.txt");
		gestionoeufs();
	}
	if (y == 6)
	{
		gestionanimal();
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

void gestionanimal()
{

	int x, y;

	cout << " \n ***** Gestion Des Produits Animals ***** \n";
	cout << "Choisir numero convenable:\n";
	cout << "1- Gestion Viande\n";
	cout << "2- Gestion Lait\n";
	cout << "3- Gestion Oeufs\n";
	cout << "4- Retour au menu principal\n";
	cout << "5- Sortir\n";
	cin >> x;

	while (x != 1 && x != 2 && x != 3 && x != 4 && x != 5  )
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> x;
	}

	// Gestion Viande ;
	if (x == 1)
	{
		gestionviande();
	}
		

	// Gestion du lait
	if (x == 2)
	{
		gestionlait();
	}

	// Gestion des oeufs
	if (x == 3)
	{
		gestionoeufs();
		
	}

	if (x == 4)
	{
		main();
	}

	// if ( x ==5) rien a faire 
}