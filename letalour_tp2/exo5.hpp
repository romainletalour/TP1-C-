#include <iostream>

using namespace std;

float * creer( float **tabOrig, int taille) 
{
    float * tab = (float *)malloc(sizeof(float)*taille);
    for (int i = 0; i < taille; i++)
    {
        *(tab + i) = **tabOrig;
        **tabOrig++;
    }
    return tab;
}