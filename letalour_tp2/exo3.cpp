#include <iostream>
#include <string>

using namespace std;

void divisible1(int a, int b)
{
	if(a && b == 0)
	{
		cout << "--Entrez des nombres autre que 0--" << endl;
	}
	else
	{
		if(a%b == 0)
		{
			cout << b << " divise " << a << endl;
		}
		else
		{
			cout << "Ces nombres ne sont pas divisibles!" << endl;
		}
	}
}

bool divisible2(int *a, int *b)
{
	if (*a == 0)
	{
		return 1;
	}
	return *a%*b == 0 ? true:false;
		
}

int main()
{
	int a;
	int b;
	int *pt1=&a;
	int *pt2=&b;
	cout << "Entrez un nombre : " << endl;
	cin >> a;
	cout << "Entrez en un deuxieme : " << endl;
	cin >> b;
	divisible1(a,b);
	divisible2(pt1,pt2);
	
	
}
