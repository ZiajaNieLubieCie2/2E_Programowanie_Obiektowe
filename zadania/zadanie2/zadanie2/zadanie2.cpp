// zadanie1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double obwodPr(double bok1, double bok2)
{
	double obwodPr;
	obwodPr = 2 * bok1 + 2 * bok2;

	return obwodPr;
}
int main()
{
	double bok1, bok2;
	cout << "podaj pierwszy bok trojkata " << endl;
	cin >> bok1;
	cout << "podaj drugi bok trojkata " << endl;
	cin >> bok2;


	cout << "oto wynik " << obwodPr(bok1, bok2);
}
