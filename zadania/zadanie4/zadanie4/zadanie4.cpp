#include <iostream>
#include <cmath>
using namespace std;

double obwodPr(double promien)
{
	double obwodPr;
	obwodPr = 2 * 3.14 * promien;

	return obwodPr;
}
double polePr(double promien)
{
	double polePr;
	polePr = 3.14 * pow(promien, 2);


	return polePr;
}
int main()
{
	double promien;
	cout << "podaj promien kola " << endl;
	cin >> promien;
	


	cout << "oto wynik obwod " << obwodPr(promien) << endl;
	cout << "oto wynik pola " << polePr(promien) << endl;
}
