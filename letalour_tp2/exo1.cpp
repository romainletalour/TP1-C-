#include <iostream>

using namespace std;

long puissance(int nb, int puissance = 2)
{
	if (puissance == 0) return 1;
	int result = 1;
	while(puissance)
	{
		result *= nb;
		puissance--;
	}
	return result;
}

int main()
{
	int nb;
	int pow;
	cout << "Entrez un nombre : " << endl;
	cin >> nb;
	cout << "Entrez une puissance : " << endl;
	cin >> pow;
	cout << puissance(nb, pow) << endl;
}
