#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 
 
    int x,y,z;
    do{
    
  
    
    cout << "1 = dodawanie" << endl;
    cout << "2 = odejmowanie" << endl;
    cout << "3 = mnozenie" << endl;
    cout << "4 = dzielenie" << endl;
    cout << "0 = zakoncz program" << endl;
        cout <<"wybierz sposob rozwiazania "<< endl;
    cin >> z;
           if (z == 0,x == 0,y == 0)
    exit; 
    cout <<"podaj pierwsza liczbe do dzialania: " <<endl;
    cin >> x;
    cout <<"podaj druga liczbe do dzialania: "<< endl;
    cin >> y;

    
    else if(z == 1)
    cout << x + y <<endl;
    else if (z == 2)
    cout << x - y <<endl;
    else if (z == 3)
    cout << x * y <<endl;
    else if (z == 4)
    cout << x / y <<endl;
       }
while (z!=0)
    
    return 0;
}
