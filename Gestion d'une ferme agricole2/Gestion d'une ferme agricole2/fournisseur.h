#include <string>
#include <vector>
using namespace std;
#include <iomanip>
#include <fstream>


class commandefournisseur
{
	string fournisseur;
	string commande;

public:
	friend class stockcommande;
	friend ostream& operator<< (ostream& out, commandefournisseur& c);
	friend istream& operator>> (istream& in, commandefournisseur& c);
};

class stockcommande
{
	vector <commandefournisseur> tab;
public:
	void openfile();
	void savefile();
	friend ostream& operator<< (ostream&, stockcommande&);
	void ajoutercommande();
	void supprimercommande();

};
