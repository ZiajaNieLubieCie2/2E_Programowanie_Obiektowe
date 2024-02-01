#include <iostream>
using namespace std;
void liczba(int znak, int liczba1, int liczba2)
{
	int wynik = 0;
	switch (znak) {

	case 1:
		double dodawanie();
		cout << liczba1 + liczba2 << endl;
		cin >> wynik;
		break;
	case 2:
		double mnozenie();
		cout << liczba1 * liczba2 << endl;
		cin >> wynik;
		break;
	case 3:
		double odejmowanie();
		cout << liczba1 - liczba2 << endl;
		cin >> wynik;
		break;
	case 4:
		double dzielenie();
		cout << liczba1 / liczba2 << endl;
		cin >> wynik;
		break;


		cout << "podaj pierwsza liczbe" << endl;
		cin >> liczba1;
		cout << "podaj druga liczbe" << endl;
		cin >> liczba2;
		double dodawanie();
		cout << "podaj pierwsza liczbe" << endl;
		cin >> liczba1;
		cout << "podaj druga liczbe" << endl;
		cin >> liczba2;
		double mnozenie();
		cout << "podaj pierwsza liczbe" << endl;
		cin >> liczba1;
		cout << "podaj druga liczbe" << endl;
		cin >> liczba2;
		double odejmowanie();
		cout << "podaj pierwsza liczbe" << endl;
		cin >> liczba1;
		cout << "podaj druga liczbe" << endl;
		cin >> liczba2;
		double dzielenie();
	}

}
int main() {
	int znak;
	int liczba1, liczba2;
	int wynik = 0;

	cout << " podaj pierwsza liczbe do znaku " << endl;
	cout << " 1 = + " <<  endl;
	cout << " 2 = * " << endl;
	cout << " 3 = - " << endl;
	cout << "4 = / " << endl;
	cin >> znak;
	cout << "oto wynik: " << wynik << endl;

	return 1;
}

