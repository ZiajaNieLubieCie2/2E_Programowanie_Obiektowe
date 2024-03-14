#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
#include <print>
using namespace std;

int main()
{
	int kat{};
	printf("podaj ile stopni ma kat: ");
	scanf_s("%d", &kat);
	if (kat > 0 && kat < 90)
	{
		printf("sinus to %g ", sin(kat * 3.14 / 180) );
		printf("cosinus to %g", cos(kat * 3.14 / 180) );
		printf(" tangens to %g", tan(kat * 3.14 / 180) );
		cout << "." << endl;
	if ( kat < 0 && kat > 90)

		cout << "kat jest za duzy" << endl;
	}
}