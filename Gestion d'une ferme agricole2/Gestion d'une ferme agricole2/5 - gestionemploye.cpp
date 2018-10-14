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

void gestionemploye()
{
	int y;
	stockemploye ste;

	cout << " \n ****** Gestion Des Employes ****** \n";
	cout << "tapez numero convenable: \n";
	cout << "1- Afficher les employes\n";
	cout << "2- Modifier les donnees\n";
	cout << "3- Ajouter un nouveau employe\n";
	cout << "4- Supprimer un employe de la liste\n";
	cout << "5- Retour au menu principal\n";
	cout << "6- Sortir\n";
	cin >> y;

	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}

	if (y == 1)
	{
		ste.openfile();
		cout << ste;
		ste.savefile();
		gestionemploye();
	}
	if (y == 2)
	{
		ste.openfile();
		ste.modifieremploye();
		ste.savefile();
		gestionemploye();
	}
	if (y == 3)
	{
		ste.openfile();
		ste.ajouteremploye();
		ste.savefile();
		gestionemploye();
	}
	if (y == 4)
	{
		ste.openfile();
		ste.supprimeremploye();
		ste.savefile();
		gestionemploye();
	}
	if (y == 5)
	{
		main();
	}
	if (y == 6)
	{
		return;
	}
}