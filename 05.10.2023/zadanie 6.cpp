#include <iostream>

using namespace std;

int main()
{
    int x;

cout << "podaj rok " << endl;
cin >>x;

bool y = ( x % 4 == 0)  || x % 400 == 0;

if (x <=1582)
{

    cout << "luty wtedy mial 28 dni"<< endl;

}
else  if (y)
{
    cout <<"w roku "<< x << "luty ma 29 dni " <<endl;

}

else
{
    cout << "w roku " << x << "luty ma 28 dni " << endl;
}
return 0;


}
