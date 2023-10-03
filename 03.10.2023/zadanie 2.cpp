#include <iostream>
using namespace std;

int main()
{
	int figura;
	double pole;
	double sciana;
	double bok1;
	double bok2;
	double wysokosc;
	double podstawa2;

	cout << "Wybierz figurę: " << endl;
	cout << "1-kwadrat   2-trapez   3- romb    4-trojkat" << endl;
	cin >> figura;

	switch (figura)
	{
	case 1:
			cout << "podaj dlugosc boku kwadratu: " << endl;
			cin >> sciana;
			pole = sciana * sciana;
			break;
	
	case 2:
			cout << "podaj dlugosc pierwszej podstawy u trapezu  " << endl;
			cin >> bok1;
			cout << "podaj dlugosc drugiej podstawy u trapezu  " << endl;
			cin >> bok2;
			cout << "podaj dlugosc wysokosci   " << endl;
			cin >> wysokosc;
			pole = 0.5 * (bok1 + bok2) * wysokosc;
			break;


	case 3:
		    cout << "podaj dlugosc pierwszej przekontnej  " << endl;
			cin >> bok1;
			cout << "podaj dlugosc drugiej przekontnej  " << endl;
			cin >> bok2;
			pole = 0.5 * bok1 * bok2;
		    break;
	

	case 4:
			cout << "podaj dlugosc podstawy " << endl;
			cin >> podstawa2;
			cout << "podaj wysokosc " << endl;
			cin >> wysokosc;
			pole = sciana * sciana;
			break;
	}



	
}

  

