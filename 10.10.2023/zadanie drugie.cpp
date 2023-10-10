#include <iostream>
#include <string>

using namespace std;

int main()
{
	string login, haslo;
	do {
		cout << "podaj login: " << endl;
		cin >> login;
		cout << "podaj haslo: " << endl;
		cin >> haslo;
		if (login == "admin" && haslo == "haslo") {

			cout << "gratulacje zostales zalogowany " << endl;
			break;
		}
		
		else if (login == "admin1" && haslo == "haslo1") {

			cout << "gratulacje zostales zalogowany " << endl;
			break;
		}
		else if (login == "admin2" && haslo == "haslo2") {

			cout << "gratulacje zostales zalogowany " << endl;
			break;
		}
		else
		
			cout << "niestety nie zostales zalogowany " << endl;
		
	} while (true);

	return 0;
}
