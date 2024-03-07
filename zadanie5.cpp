#include <iostream>
using namespace std;
int suma(int a, int b, int c)
{
    if (a * a + b * b == c * c)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int a, b, c;
    cout << "podaj liczbe pierwsza" << endl;
    cin >> a;
    cout << "podaj druga liczbe" << endl;
    cin >> b;
    cout << "podaj trzecia liczbe" << endl;
    cin >> c;

    cout << "to sie rowna " << suma(a, b, c) << endl;
}