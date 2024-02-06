#include <iostream> 
using namespace std; 
 double przelicznik(int mila)
{ 
	 double kilometr;
	 kilometr = mila * 1.609;
	 cout << "oto wynik " << kilometr << endl; 
	 return 0;
 }

 int main() {
	double mila;
	cout << "podaj ilosc mil: " << endl;
	cin >> mila;
	przelicznik(mila);
}