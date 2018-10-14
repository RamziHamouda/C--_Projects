#include <string>
#include <vector>
using namespace std;

class champs
{
	string type;
	string variete;
	float superficie;

	friend class tableauchamps;
	friend ostream& operator << (ostream&, champs&); //pour l'usage sur le fichier
};

class tableauchamps
{
	float superficie_total;
	vector <champs> tab;

public : 

	friend ostream& operator << (ostream&, tableauchamps&); //pour l'affichage
	float superficie_utilise();
	void changer_superficie_total();
	void ajoutersuperficie();
	void supprimersuperficie();
	void modifiersuperficie();

	void openfile();
	void savefile();
};
