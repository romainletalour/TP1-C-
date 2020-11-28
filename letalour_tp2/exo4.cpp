#include <iostream>

using namespace std;

float *copie(float *tabOrig, int taille)
{
	float *tab = (float*)malloc(sizeof(float)*taille);
	for (int i = 0; i < taille; i++)
	{
		*(tab + i) = *tabOrig;
		*tabOrig++;
	}
	return tab;	
}


int main()
{
	int taille;
	cout << "Indiquez la quantité de nombres à copier" << endl;
	cin >> taille;
	cout << "========================================" << endl;
	float tab[5] = {2,4,6,8,10};
	float *tableau = copie(tab, taille);
	int i = 0;
	while (i < taille)
	{
		cout << *tableau << endl;
		*tableau++;
		i++;
	}
}
