#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include "point.hpp"


using namespace std;

Point::Point(int abs, int ord){ //constructeur
	mX = abs; 
	mY = ord;
}
	
void Point::affiche(){
	cout<<"abscisse = "<< mX <<" et ordonnée = "<< mY <<endl;
}

bool Point::testEgal(Point const& b) const{
	if(mX == b.mX && mY == b.mY)
		return true;
	else
		return false;
}

double Point::norme(){
	double nrm = sqrt(pow(mX,2) + pow(mY,2)); // calcul de la norme
	return nrm;
}

// tout le code ci dessus compile et fonctionne, en revanche j'ai un problème dans le nuage de points
// cf. commentaire dans le while de NuageDePoints(int).
//=========================================================



NuageDePoints::NuageDePoints(int nbPoints){ 
	int taille = nbPoints;
	nuage = new Point[taille];
	int i=0;
	while(nuage[taille-1].testEgal(Point(0,0))){  // il y a une référence indéfinie a ce niveau lors de la compilation et je n'arrive pas a trouver le problème
		int j=0;
		srand(10);
		Point p = Point(rand(),rand());
		for(j=0; j<i; j++){
			if(p.testEgal(nuage[j]))break;
		}
		if(p.testEgal(nuage[i-1])==0 || i==0){
			nuage[i]=p;
			i++;
		}
	}
}

int NuageDePoints::getTaille(){
	return taille;
}

void NuageDePoints::affiche(){ 
	int i;
	for(i=0; i<getTaille(); i++) {
		nuage[i].affiche();
		cout<<"\n"<<endl;
	}
}

Point NuageDePoints::barycentre(){
	int abs=0;
	int ord=0;
	int i;
	for (i = 0; i < getTaille(); i++)
	{
		abs+=nuage[i].getX();
		ord+=nuage[i].getY();
	}
	return Point(abs, ord);
}


