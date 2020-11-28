#include <iostream>
using namespace std;

double inverse(double nb)
{
    return nb != 0 ? 1/nb : 0;
}

int main(){
    int val = 45;
    cout << "Entrez un nombre : " << endl;
    cin >> val;
    cout << "Inverse de " << val << ": " << inverse(val) << endl;
}



