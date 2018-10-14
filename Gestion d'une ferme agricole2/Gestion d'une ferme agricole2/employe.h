#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include <fstream>

class employe
{
private:
	string nom;
	string prenom;
	int code;
	int acces;
	float salaire;
	int conge; // nombre de jours 
	string tache;	//chaque entier correspond à un code definissant les acces possibles pour un employe
	friend class stockemploye;
	friend void mainemploye();
	
public:
	employe();
	friend ostream& operator<< (ostream& out, employe& e);
	friend istream& operator>> (istream& in, employe& e);
};

class stockemploye
{
public:
	vector <employe> tab;
public:
	void openfile();
	void savefile();
	friend ostream& operator<< (ostream&, stockemploye&);
	void ajouteremploye();
	void supprimeremploye();
	void modifieremploye();

};
	
