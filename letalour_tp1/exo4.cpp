#include <iostream>
#include <string>

using namespace std;

char *getMot()
{
	char *str = new char[100];
	cout << "Tapez un mot:" << endl;
	cin >> str;
	return str;
}

void printMot()
{
	int i = 0;
	char* str;
	while (str[i] != '\0')
	{
		cout << str[i] << endl;
		i++;
	}
	
}

int main(int argc, char const *argv[])
{
	getMot();
	printMot();
}

