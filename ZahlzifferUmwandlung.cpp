#include <iostream>
using namespace std;

int main()
{
	char eingabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> eingabe;

	if (int(eingabe) == int('e'))
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}

	else if (int(eingabe) >= int('0') && int(eingabe) <= int('9'))
	{
		cout << eingabe << " + 5 = " << int(eingabe) - int('0') + 5 << endl;
	}
	else
	{
		cout << "Weder 'e' noch Ziffer" << endl;
	}

	system("PAUSE");
	return 0;
}