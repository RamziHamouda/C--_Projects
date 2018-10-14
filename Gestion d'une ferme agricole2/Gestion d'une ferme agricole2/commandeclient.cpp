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

istream& operator>> (istream& in, commande& c)
{
	int x, y;

	cout << " Tapez numero convenable pour la categorie voulue: \n";
	cout << "1 - produits animals\n";
	cout << "2 - produits vegetals\n";
	cout << "3 - animaux domestiques\n";
	cout << "4 - Retour au menu principal\n";
	cout << "5 - Sortir \n";

	cin >> x;

	while (x != 1 && x != 2 && x != 3 )
	{
		cout << "numero entre non valide , entrez de nouveau \n";
		cin >> x;
	}

	// produits animals
	if (x == 1)
	{
		c.categorie = "Produits_Animals";
		cout << "tapez numero convenable : \n";
		cout << "1- Faire commande Viande\n";
		cout << "2- Faire commande Lait\n";
		cout << "3- Faire commande Oeufs\n";
		cin >> y;

		while (y != 1 && y != 2 && y != 3)
		{
			cout << "numero entre non valide , entrez de nouveau \n";
			cin >> y;
		}
		if (y == 1)
		{
			stockproduit st("viande", "1kg");
			st.openfile("D:viande.txt");

			cout << "voici nos produits : \n"; 
			cout << st;

			string type, race;
			cout << "entrez type et race de la viande que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez quantite voulu sachant qu'on a " << st.tab[i].quantite << " Kg en stock\n";
					cin >> c.quantite;
					break;
				}
			}
			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:viande.txt");
		}
		if (y == 2)
		{
			stockproduit st("lait", "Litre");
			st.openfile("D:lait.txt");

			cout << "voici nos produits : \n"; 
			cout << st;

			string type, race;
			cout << "entrez type et race de lait que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez quantite voulu sachant qu'on a " << st.tab[i].quantite << " litres en stock\n";
					cin >> c.quantite;
					break;
				}
			}

			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:viande.txt");
		}
		if (y == 3)
		{
			stockproduit st("oeufs", "Plateau");
			st.openfile("D:oeufs.txt");

			cout << "voici nos produits : \n"; 
			cout << st;

			string type, race;
			cout << "entrez type et race d'oeufs que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez nombre des plateaux voulu sachant qu'on a " << st.tab[i].quantite << " plateaux en stock\n";
					cin >> c.quantite;
					break;
				}
			}

			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:oeufs.txt");
		}
	}

	// produits vegetals
	if (x == 2)
	{
		c.categorie = "Produits_Vegetals";
		cout << "tapez numero convenable : \n";
		cout << "1- Faire commande Legumes\n";
		cout << "2- Faire commande Grains\n";
		cout << "3- Faire commande Fruits\n";
		cin >> y;

		while (y != 1 && y != 2 && y != 3)
		{
			cout << "numero entre non valide , entrez de nouveau \n";
			cin >> y;
		}
		if (y == 1)
		{
			stockproduit st("legumes", "1kg");
			st.openfile("D:legume.txt");

			cout << "voici nos produits : \n"; 
			cout << st;

			string type, race;
			cout << "entrez type et variete du legume que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez quantite voulu sachant qu'on a " << st.tab[i].quantite << " Kg en stock\n";
					cin >> c.quantite;
					break;
				}
			}

			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:viande.txt");
		}
		if (y == 2)
		{
			stockproduit st("Grains", "1Kg");
			st.openfile("D:grains.txt");

			cout << "voici nos produits : \n";

			cout << st;

			string type, race;
			cout << "entrez type et variete de grains que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez quantite voulu sachant qu'on a " << st.tab[i].quantite << " Kg en stock\n";
					cin >> c.quantite;
					break;
				}
			}

			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:grains.txt");
		}
		if (y == 3)
		{
			stockproduit st("fruits", "1Kg");
			st.openfile("D:fruit.txt");

			cout << "voici nos produits : \n";

			cout << st;

			string type, race;
			cout << "entrez type et variete de fruit que vous voulez acheter \n";
			cin >> type >> race;

			int i;
			for (i = 0; i < st.tab.size(); i++)
			{
				if (st.tab[i].type == type && st.tab[i].race == race)
				{
					c.type = type; c.race = race;
					cout << "entrez quantite des fruits voulu sachant qu'on a " << st.tab[i].quantite << " Kg en stock\n";
					cin >> c.quantite;
					break;
				}
			}

			while (c.quantite > st.tab[i].quantite)
			{
				cout << "quantite entre est superieur a ce qui est disponible, entrez de nouveau \n";
				cin >> c.quantite;
			}

			st.tab[i].quantite -= c.quantite;

			c.prix = c.quantite * st.tab[i].prix;

			st.savefile("D:fruit.txt");
		}
	}

	// animaux domestiques
	if (x == 3)
	{
		c.categorie = "Animaux_Domestiques";

		stockdomestiques st;
		st.openfile();

		cout << "voici animaux disponibles : \n";
		
		cout << st;

		string type, race;
		cout << "entrez type et race des animaux que vous voulez acheter \n";
		cin >> type >> race;

		int i;
		for (i = 0; i < st.tab.size(); i++)
		{
			if (st.tab[i].type == type && st.tab[i].race == race)
			{
				c.type = type; c.race = race;
				cout << "entrez quantite voulu sachant qu'on a " << st.tab[i].quantite << "\n";
				cin >> c.quantite;
				break;
			}
		}

		while (c.quantite > st.tab[i].quantite)
		{
			cout << "nombre entre est superieur a ce qui est disponible, entrez de nouveau \n";
			cin >> c.quantite;
		}

		st.tab[i].quantite -= c.quantite;

		c.prix = c.quantite * st.tab[i].prix;

		st.savefile();
	}

	if (x == 4)
	{
		main();
	}
	//if (x == 5)

	return in;
}

ostream& operator<< (ostream& out, commande &c)
{
	out << setw(15) << c.categorie << setw(15) << c.type << setw(15) << c.race << setw(15) << c.quantite << setw(15) << c.prix << '\n';
	return out;
}

istream& operator >> (istream& in, commandeclient& c) // pour entrez une commande
{
	cout << "donnez nom = ";
	in >> c.nom;
	cout << "donnez prenom = ";
	in >> c.prenom;

	c.nbre = 0;

	commande com;
	int x = 1;

	while (x == 1)
	{
		c.nbre += 1;
		in >> com;
		c.tab.push_back(com);

		cout << "voulez vous faire une autre commande ? tapez : \n";
		cout << "1 - oui \n";
		cout << "2 - non \n";
		cin >> x;
	}
	return in;
}

ostream& operator<< (ostream& out, commandeclient& c) // pour l'utilisation sur le fichier et l'affichage
{
	out << setw(15) << c.nom << setw(15) << c.prenom << setw(15) << c.nbre << endl;
	for (int i = 0; i < c.tab.size(); i++)
	{
		out << c.tab[i];
	}

	return out;
}


void tableaucommande::savefile()
{
	int i;
	fstream f;

	f.open("D:commandeclient.txt", ios::in | ios::out | ios::trunc);

	for (i = 0; i < vect.size(); i++)
	{
		f << vect[i];
	}
	f.close();
}

void tableaucommande::openfile()
{
	int i;
	fstream f;
	f.open("D:commandeclient.txt", ios::in | ios::out | ios::app);

	commandeclient c;

	while (f >> c.nom)
	{
		f >> c.prenom;
		f >> c.nbre;

		for (i = 0; i < c.nbre; i++)
		{
			commande com;

			f >> com.categorie;
			f >> com.type;
			f >> com.race;
			f >> com.quantite;
			f >> com.prix;
			c.tab.push_back(com);
		}
		vect.push_back(c);
	}
	f.close();
}


void tableaucommande::affichercommande()
{
	int i;
	float som=0;
	for (i = 0; i < vect.size(); i++)
	{
		cout << "\n\n";
		cout << setw(15) << "nom" << setw(15) << "prenom" << setw(30) << "nbre des commandes" << endl;
		cout << setw(15) << vect[i].nom << setw(15) << vect[i].prenom << setw(15) << vect[i].nbre << endl;

		cout << setw(15) << "categorie" << setw(15) << "type" << setw(15) << "race" << setw(15) << "quantite" << setw(15) << "prix" << '\n';

		for (int j = 0; j < vect[i].nbre; j++)
		{
			cout << setw(15) << vect[i].tab[j].categorie << setw(15) << vect[i].tab[j].type << setw(15) << vect[i].tab[j].race << setw(15) << vect[i].tab[j].quantite << setw(15) << vect[i].tab[j].prix << '\n';
			som += vect[i].tab[j].prix;
		}
		cout << "prix de commande total = " << som << "\n\n";
	}
}

void tableaucommande::ajoutercommande()
{
	commandeclient c;

	cin >> c;

	vect.push_back(c);
}


