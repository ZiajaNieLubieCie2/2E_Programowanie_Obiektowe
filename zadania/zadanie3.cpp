#include <iostream>
using namespace std;
struct pracownik {
    char imie[40];
    char nazwisko[50];
    char plec;
};

int main() {
    pracownik bro;
    printf("Podaj imi� pracownika: ");
    scanf("%s", bro.imie);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", bro.nazwisko);
    printf("Podaj p�e� pracownika (k - kobieta, m - m�czyzna): ");
    scanf(" %c", bro.plec);

    printf(" Imi�: %s", bro.imie);
    printf(" Nazwisko: %s", bro.nazwisko);
    printf(" P�e�: %c", bro.plec);

    return 0;
}