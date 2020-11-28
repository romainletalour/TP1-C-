#include <iostream>
#include <cstdlib>
#include "point.hpp"

using namespace std;

int main(){
	Point a = Point(1,7);
	Point b = Point(3,9); //point est appelé a
	a.affiche();
	b.affiche();
	
	if (a == b)
		cout << "Les points sont identiques !" <<endl;
	else
		cout << "les points sont différents !" <<endl;

	cout << "norme : " <<a.norme()<<endl; 

	cout << "=================================" <<endl;
	
	
	cout << "======= Partie barycentre =======" <<endl;

	int t_nuage; //nombre de points dans le nuage (taille nuage)

	cout << "Entrez taille nuage :" <<endl;
	cin >> t_nuage;

	NuageDePoints nuage1 = NuageDePoints(t_nuage);
	nuage1.affiche();
	nuage1.barycentre();

	return 0;
}

