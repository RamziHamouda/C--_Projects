#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "champs.h"
#include <iomanip>
#include <fstream>
#include <sstream>

void main();

void gestionchamps()
{
	int y;
	tableauchamps t;

	cout << "\n ******* Gestion Des Champs ****** \n";
	cout << "1- Afficher les champs et superficie total utilise\n";
	cout << "2- Modifier les donnees\n";
	cout << "3- Ajouter un nouveau superficie a utiliser\n";
	cout << "4- rendre un superficie non utilise\n";
	cout << "5- changer superficie total\n";
	cout << "6- Retour au menu principal\n";
	cout << "7- Sortir\n";
	cin >> y;

	while (y != 1 && y != 2 && y != 3 && y != 4 && y != 5 && y != 5 && y != 6 && y!=7)
	{
		cout << "numero entre non valide, entrez de nouveau \n";
		cin >> y;
	}

	if (y == 1)
	{
		t.openfile();
		cout << t;
		t.savefile();
		gestionchamps();
	}
	if (y == 2)
	{
		t.openfile();
		t.modifiersuperficie();
		t.savefile();
		gestionchamps();
	}
	if (y == 3)
	{
		t.openfile();
		t.ajoutersuperficie();
		t.savefile();
		gestionchamps();
	}
	if (y == 4)
	{
		t.openfile();
		t.supprimersuperficie();
		t.savefile();
		gestionchamps();
	}
	if (y == 5)
	{
		t.openfile();
		t.changer_superficie_total();
		t.savefile();
		gestionchamps();
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