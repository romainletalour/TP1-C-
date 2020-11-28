#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

void saisie(int *entier)
{
	cout << "Entrez un entier : " << endl;
	cin >> *entier;
	cout << "Type : " << typeid(entier).name() << endl;
}

void saisie(double *reel)
{
	cout << "Entrez un réel : " << endl;
	cin >> *reel;
	cout << "Type : " << typeid(reel).name() << endl;
}

void saisie(char *car)
{
	cout << "Entrez un caractère : " << endl;
	cin >> *car;
	cout << "Type : "<< typeid(car).name() << endl;
}

void saisie(string *str)
{
	cout << "Entrez une chaine de caractères : " << endl;
	cin >> *str;
	cout << "Type : " << typeid(str).name() << endl;
}


int main()
{
	int *entier = new int;
	double *reel = new double;
	char *car = new char;
	string *str = new string;

	saisie(entier);
	saisie(reel);
	saisie(car);
	saisie(str);
}
