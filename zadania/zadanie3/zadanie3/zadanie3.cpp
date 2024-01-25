
#include <iostream>
using namespace std;

double obwodPr(double bok1, double bok2)
{
	double obwodPr;
	obwodPr = 2 * bok1 + 2 * bok2;

	return obwodPr;
}
double polePr(double bok1, double bok2)
{
	double polePr;
	polePr = bok1 * bok2;

	return polePr;
}
int main()
{
	double bok1, bok2;
	cout << "podaj pierwszy bok trojkata " << endl;
	cin >> bok1;
	cout << "podaj drugi bok trojkata " << endl;
	cin >> bok2;


	cout << "oto wynik obwod " << obwodPr(bok1, bok2) << endl;
	cout << "oto wynik pola " << polePr(bok1, bok2) << endl;
}
