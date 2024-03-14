#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
#include <print>
using namespace std;

int main()
{
	int liczba;
	int potega;
	printf("podaj liczbe");
	scanf_s("%d", &liczba);
	printf("podaj potege");
	scanf_s("%d", &potega);
	printf("%g", pow(liczba, potega));

}
