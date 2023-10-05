#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    
cout << "podaj pierwsza liczbe  " << endl;
cin >>x;
cout << "podaj druga  liczbe  " << endl;
cin >>y;
cout << "podaj trzecia  liczbe  " << endl;
cin >>z;

if (x < y && x < z)
cout << "liczba "<< x << "jest najmniejsza" << endl;
else if (y < x && y < z)
cout << " liczba " << y << " jest najmniejsza " << endl;
else if (z < x && z < y)
cout << " liczba " << z << " jest najmniejsza"<< endl;
}
