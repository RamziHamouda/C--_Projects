#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>

class domestiques
{
private:
	string type;
	string race;
	float prix;
	float quantite; // quantite representant poids total de tous les animaux;

public:
	friend class stockdomestiques;
	friend ostream& operator << (ostream&, domestiques&); //pour l'usage sur le fichier
	friend istream& operator >> (istream&, domestiques&); //pour l'usage sur le fichier 

	friend class commande;
	friend class commandeclient;
	friend istream& operator>> (istream&, commande&);
};


class stockdomestiques
{
public:
	vector <domestiques> tab;
public:
	void openfile();
	void savefile();
	friend ostream& operator<< (ostream&, stockdomestiques&);
	
	void quantite(); 
	void ajoutertype();
	void supprimertype();
	void modifier();

	friend class commande;
	friend class commandeclient;
	friend istream& operator>> (istream&, commande&);
};
