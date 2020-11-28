#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int val;
    cout << "Entrez un nombre :" << endl;
    cin >> val;
    if (val %2 == 0)
    {
        cout << "Ce nombre est pair" << endl;
    }
    else
    {
        cout << "Ce nombre est impair" << endl;
    }
    
}
