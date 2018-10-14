#include <string>
#include <vector>
using namespace std;

class commande
{
	string categorie;
	string type;
	string race;
	float quantite;
	float prix; // prix de cette commande 
	
	friend class commandeclient;
public:
	friend istream& operator>> (istream&, commande&);
	friend ostream& operator<< (ostream&, commande&);


	friend class tableaucommande;
};

class commandeclient
{
	string nom;
	string prenom;
	
	int nbre; // nombre des achats 

	vector <commande> tab;

public:
	friend istream& operator>> (istream&, commandeclient&);
	friend ostream& operator<< (ostream&, commandeclient&);

	friend class tableaucommande;
};

class tableaucommande
{
	vector <commandeclient> vect;

public:
	void openfile();
	void savefile();

	void affichercommande();
	void ajoutercommande();
	
};

