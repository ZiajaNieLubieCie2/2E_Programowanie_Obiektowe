#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string mieszajLitery(string slowo)
{
	string mieszanka;
	int pozycja(0);

	while (slowo.size() != 0)
	{
		pozycja = rand() % slowo.size();

		mieszanka += slowo[pozycja];

		slowo.erase(pozycja, 1);
	}
	return mieszanka;
}
int main()
{
	string sekretneslowo, pomieszaneslowo, slowouzytkownika;
	srand(time(0));

	cout << "Wpisz slowo: " << endl;
	cin >> sekretneslowo;

	pomieszaneslowo = mieszajLitery(sekretneslowo);

	do
	{
		cout << endl; << "Co to za slowo? " << pomieszaneslowo << endl;
		cin >> slowouzytkownika;

		if (slowouzytkownika == sekretneslowo)
		{
			cout << "Brawo ! " << endl;
		}
		else
		{
			cout<<"Zle! "<<endl
		}
	} while (slowouzytkownika != sekretneslowo);
	{
		return 0;
	}
}