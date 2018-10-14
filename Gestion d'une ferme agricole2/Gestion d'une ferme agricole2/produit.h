#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>

class produit
{
	string type;
	string race; // peut etre race d'un animal ou variete d'un espece vegetal
	float prix;
	float quantite;
public:
	friend class stockproduit;
	friend ostream& operator << (ostream&, produit&); //pour l'usage sur le fichier
	friend istream& operator >> (istream&, produit&); //pour l'usage sur le fichier 
	
	friend class commande;
	friend class commandeclient;

	friend istream& operator>> (istream&, commande&);
};


class stockproduit
{

	vector <produit> tab;
	string catégorie; // viande/lait/oeufs....légumes/fruits/grains
	string unité;
public:
	stockproduit(string catégorie, string unité);
	void openfile(string);
	void savefile(string );
	friend ostream& operator<< (ostream&, stockproduit&);
	void quantite();
	void ajoutertype();
	void supprimertype();
	void modifier();

	friend class commandeclient;
	friend class commande;
	friend istream& operator >> (istream&, commande&);
};


