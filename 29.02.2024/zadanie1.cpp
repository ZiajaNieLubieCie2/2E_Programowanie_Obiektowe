#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char jezyk1[15]{ "c++" };
	cout << jezyk1 << endl;
	strcpy(jezyk1, "Java");
	cout << jezyk1 << endl;
	char jezyk2[]{ "c#" };
	cout << jezyk2 << endl;
	strcpy(jezyk2, "Java");
	cout << jezyk2 << endl;
	const char* jezyk3{ "C" };
	cout << jezyk3 << endl;
	jezyk3 = "java";
	cout << jezyk3 << endl;
	}


