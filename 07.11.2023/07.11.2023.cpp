#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	int numer;
	int computer;
	int wyg = 0;
	int cwin = 0;
	int remis = 0;

	cout << "Wybierz moc: " << endl;
	cout << "1  Nozyce " << endl;
	cout << "2  Papier " << endl;
	cout << "3  Kamien " << endl;
	cout << "4  Jaszczurka" << endl;
	cout << "5  Spock" << endl;
	do {
		cin >> numer;

		srand(time(0));
		computer = rand() % 5 + 1;

		if (numer == 0)
		{
			cout << "Koniec gry " << endl;
			return 0;
		}

		if (computer == numer) {
			cout << "Remis " << endl;
			remis++;
		}

		if (numer == 1) {
			cout << "Wybrales moc Nozyc " << endl;
		}
		else if (numer == 2) {
			cout << "Wybrales moc Papieru " << endl;
		}
		else if (numer == 3) {
			cout << "Wybrales moc Kamienia " << endl;
		}
		else if (numer == 4) {
			cout << "Wybrales moc Jaszczurki " << endl;
		}
		else if (numer == 5) {
			cout << "Wybrales moc Spocka " << endl;
		}

		if (computer == 1) {
			cout << "Komputer wybral moc Nozyc " << endl;
		}
		else if (computer == 2) {
			cout << "Komputer wybral moc Papieru " << endl;
		}
		else if (computer == 3) {
			cout << "Komputer wybral moc Kamienia " << endl;
		}
		else if (computer == 4) {
			cout << "Komputer wybral moc Jaszczurki " << endl;
		}
		else if (computer == 5) {
			cout << "Komputer wybral moc Spocka " << endl;
		}

		if (computer == 1 && numer == 2) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 1 && numer == 4) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 2 && numer == 3) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 2 && numer == 5) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 3 && numer == 1) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 3 && numer == 4) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 4 && numer == 2) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 4 && numer == 5) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 5 && numer == 1) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}
		else if (computer == 5 && numer == 3) {
			cout << "Komputer wygral " << endl;
			cwin++;
		}

		if (numer == 1 && computer == 2) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 1 && computer == 4) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 2 && computer == 3) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 2 && computer == 5) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 3 && computer == 1) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 3 && computer == 4) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 4 && computer == 2) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 4 && computer == 5) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 5 && computer == 1) {
			cout << "Wygrales " << endl;
			wyg++;
		}
		else if (numer == 5 && computer == 3) {
			cout << "Wygrales " << endl;
			wyg++;
		}

		cout << "Liczba twoich zwyciest wynosi: " << wyg << endl;
		cout << "Liczba zwyciest komputera wynosi: " << cwin << endl;
		cout << "Liczba remisow wynosi: " << remis << endl;

	} while (true);
}