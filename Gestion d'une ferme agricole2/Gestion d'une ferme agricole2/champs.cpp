#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "champs.h"
#include <iomanip>
#include <fstream>
#include <sstream>


ostream& operator<< (ostream & out, champs &c)
{
	out << setw(30) << c.type << setw(30) << c.variete << setw(30) << c.superficie << "\n";
	return out;
}


float tableauchamps::superficie_utilise()
{
	int i;
	float som = 0;
	for (i = 0; i < tab.size(); i++)
	{
		som += tab[i].superficie;
	}
	return som;
}

void tableauchamps::changer_superficie_total()
{
	float valeur;
	
	cout << "donnez nouvelle valeur du superficie total en metres carres ? \n ";
	cin >> valeur;

	float som = this->superficie_utilise();

	if (som <= valeur) superficie_total = valeur;
	else cout << "erreur, superficie entre est inferieur au superficie utilise total \n";
	cout << "superficie utilise (en metres carres)=  " << som;
}

void tableauchamps::ajoutersuperficie()
{
	float som = this->superficie_utilise();

	float valeur;
	cout << "donnez valeur du superficie en metres carres que vous voulez utiliser:";
	cin >> valeur;


	if ( (superficie_total - som) >= valeur )
	{
		champs c;
		c.superficie = valeur;
		cout << "donnez type a planter dans cet superficie : ";
		cin >> c.type;
		cout << "precisez la variete de ce type : ";
		cin >> c.variete;
		tab.push_back(c);
	}
	else
	{
		cout << "superficie non utilise restant n'est pas suffisant \n ";
		cout << "il vous reste " << superficie_total - som << "   metres carres" << "\n";
	}
}

void tableauchamps::modifiersuperficie()
{
	string type, variete;
	cout << "donnez type utilise dans le champs que vous voulez le modifier les donnees : ";
	cin >> type;
	cout << "donnez la variete : ";
	cin >> variete;

	float valeur;

	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].type == type && tab[i].variete == variete)
		{
			cout << "donnez nouveau type : ";
			cin >> tab[i].type;
			cout << "donnez la nouvelle variete : ";
			cin >> tab[i].variete;
			cout << "la nouvelle valeur du superficie utilisé (en metres carres) : ";
			cin >> valeur;
			while ((superficie_total - this->superficie_utilise() + tab[i].superficie) < valeur)
			{
				cout << "superficie voulu non disponible, il vous reste = " << superficie_total - this->superficie_utilise() + tab[i].superficie << "    metres carres\n";
				cout << "entrez de nouveau : \n ";
				cin >> valeur;
			}
			tab[i].superficie = valeur;
			return;
		}
	}
	cout << "type et variete non existants \n";
}


void tableauchamps::supprimersuperficie()
{
	string type, variete;
	cout << "donnez type utilise dans le champ a supprimer  : ";
	cin >> type;
	cout << "donnez la variete de ce type : ";
	cin >> variete;

	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i].type == type && tab[i].variete == variete)
		{
			tab.erase(tab.begin() + i);
			return;
		}
	}
	cout << "type et variete non existants \n";
}


void tableauchamps::openfile()
{
	fstream f;
	
	f.open("D:champs.txt", ios::in | ios::out | ios::app);
	// si n'existe pas sera crié

	f >> superficie_total;

	champs e;
	while (f >> e.type)
	{
		f >> e.variete;
		f >> e.superficie;

		tab.push_back(e);
	}
	f.close();
}

void tableauchamps::savefile()
{
	fstream f;
	f.open("D:champs.txt", ios::in | ios::out | ios::trunc);

	f << superficie_total << "\n";

	for (int i = 0; i < tab.size(); i++)
	{
		f << tab[i];
	}
	f.close();
}

ostream& operator<< (ostream & out, tableauchamps & t)
{
	cout << "superficie total (en metres carres) = ";
	cout << t.superficie_total << "\n";
	cout << "superficie total utilise (en metres carres) = ";
	cout << t.superficie_utilise() << '\n';
	cout << "il vous reste " << t.superficie_total - t.superficie_utilise() << '\n';

	out << setw(30) << "type" << setw(30) << "variete" << setw(30) << "superficie en metres carres" << "\n";
	for (int i = 0; i < t.tab.size(); i++)
	{
		out << t.tab[i];
	}
	return out;
}


