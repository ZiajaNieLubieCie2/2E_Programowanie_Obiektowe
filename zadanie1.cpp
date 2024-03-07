#include <iostream>
using namespace std;
int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "podaj liczbe pierwsza" << endl;
    cin >> a;
    cout << "podaj druga liczbe" << endl;
    cin >> b;

    cout << "to sie rowna " << suma(a, b) << endl;
}