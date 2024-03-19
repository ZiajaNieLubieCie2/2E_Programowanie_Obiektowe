#include <iostream>
using namespace std;
struct pracownik {
    char imie[40];
    char nazwisko[50];
    char plec;
};

int main() {
    pracownik bro;
    printf("Podaj imiê pracownika: ");
    scanf("%s", bro.imie);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", bro.nazwisko);
    printf("Podaj p³eæ pracownika (k - kobieta, m - mê¿czyzna): ");
    scanf(" %c", bro.plec);

    printf(" Imiê: %s", bro.imie);
    printf(" Nazwisko: %s", bro.nazwisko);
    printf(" P³eæ: %c", bro.plec);

    return 0;
}