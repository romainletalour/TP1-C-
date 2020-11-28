#include <iostream>
using namespace std;

bool triangulaire(int nb)
{
    int count = 0;
    int i = 1;
    while (count<nb)
    {
        count += i;
        i++;
    }
    return count == nb ? true:false;
}

int main(int argc, char const *argv[])
{
    bool triangle = triangulaire(atoi(argv[1]));

    if (triangle)
    {
        cout << "Ce chiffre est triangulaire." << endl;
    }
    else
    {
        cout << "Ce chiffre n'est pas triangulaire" << endl;
    }
    
    return 0;
}
