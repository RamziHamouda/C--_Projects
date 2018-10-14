#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "produit.h"
#include "employe.h"
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdlib>


void mainadministrateur();
void mainemploye();
void mainclient();

void main()
{
	
	system("color 5E");

	cout << "\n					:::::::::::::::::::::::::::::::::::::";
	cout << "\n					::                                 ::";
	cout << "\n					::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
	cout << "\n					::     @                     @     ::";
	cout << "\n					::     @      WELCOME TO     @     ::";
	cout << "\n					::     @                     @     ::";
	cout << "\n					::     @      THE Farm       @     ::";
	cout << "\n					::     @                     @     ::";
	cout << "\n					::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
	cout << "\n					::                                 ::";
	cout << "\n					:::::::::::::::::::::::::::::::::::::\n\n";


	
	
	
	int x;

	cout << "tapez sur numero convenable : \n1- administrateur \n2- employe \n3- client \n4-Sortir\n";
	cin >> x;

	while (x != 1 && x != 2 && x != 3 && x!=4)
	{
		cout << "numero entre non valide \n";
		cin >> x;
	}
	if (x == 1)
	{
		mainadministrateur() ;
	}
	if (x == 2)
	{
		mainemploye();
	}
	if (x == 3)
	{
		mainclient();
	}
	
}
