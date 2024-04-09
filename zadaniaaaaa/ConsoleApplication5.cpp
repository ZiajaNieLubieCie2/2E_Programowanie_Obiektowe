#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void)
{
	ifstream odczyt("teskt.txt");
	if (odczyt.is_open())
	{
		string linia, zawartosc;
		while (getline(odczyt, linia))
		{
			zawartosc += linia;
		}
		cout << zawartosc;
	}
	else
	{
		cout << "nie mozna otwaorzyc pliku" << endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
