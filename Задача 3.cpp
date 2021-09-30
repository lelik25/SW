#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	cout << "Vvedite n=";
	int pirvoeChislo;
	cin >> pirvoeChislo;
	cout << "Vvedite k=";
	int vtoroeChislo;
	cin >> vtoroeChislo;
	int i = 0;
	if (pirvoeChislo > vtoroeChislo)
	{
		i = pirvoeChislo;
		for (int h = 0;; h++)
		{
			if (i == 0)
			{
				i = h;break;
			}
			i /= 10;
		}
		for (int h = 0; h < i - vtoroeChislo; h++)
			pirvoeChislo /= 10;
	}
	else cout << "Error";
		cout<< pirvoeChislo;
		_getch();
		return 0;
}
