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
 
if (x == z && y == x && z == y)
cout << "wszytkie liczby sa rowne " << endl;

else if (x == y)
cout << "liczba "<< x << " i liczba " << y << " sa rowne "<<endl;
else if (y == z)
cout << " liczba " << y << " i liczba " << z << " sa rowne " << endl;
else if (x == z)
cout << " liczba " << x << " i liczba " << z << " sa rowne " << endl;
else 
cout<< " zadan liczba nie jest taka sama "<< endl;

}
