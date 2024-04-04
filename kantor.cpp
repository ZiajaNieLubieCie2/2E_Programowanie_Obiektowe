#include <iostream>
using namespace std;

int main()
{
    double liczbapieniedzy;
    int walutaprzed;
    double walutapo;
    int przewalutowanie;
    cout << "podaj ile masz sianka mordo" << endl;
    cin >> liczbapieniedzy;
    cout << "w jakiej walucie?" << endl;
    cout << "1-zlotych na gourde" << endl;
    cout << "2-gourde na zlotych" << endl;
    cout << "3-som na zlotych" << endl;
    cout << "4-taka na som" << endl;
    cout << "5-jen na taka" << endl;
    cin >> walutaprzed;
    if (liczbapieniedzy < 1)
        cout << "nie mozna tak" << endl;
    else
        switch (walutaprzed)
    {
    case 1:
        cout <<"tyle masz sianka w skrbcu " <<liczbapieniedzy * 33.31 << endl;
        break;
    case 2:
        cout << "tyle masz sianka w skrbcu " << liczbapieniedzy * 0.030 << endl;
        break;
    case 3:
        cout << "tyle masz sianka w skrbcu " << liczbapieniedzy * 0.044 << endl;
        break;
    case 4:
        cout << "tyle masz sianka w skrbcu " << liczbapieniedzy * 0.82 << endl;
        break;
    case 5:
        cout << "tyle masz sianka w skrbcu " << liczbapieniedzy * 0.72 << endl;
        break;
    }

}
