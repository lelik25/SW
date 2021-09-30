#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int n, k, i = 0;
	cout << "Vvedite n=";
	cin >> n;
	cout << "Vvedite k=";
	cin >> k;
	if (n > k)
	{
		i = n;
		for (int h = 0;; h++)
		{
			if (i == 0)
			{
				i = h;break;
			}
			i /= 10;
		}
		for (int h = 0; h < i - k; h++)
			n/= 10;
	}
	else cout << "Error";
		cout<< n;
		_getch();
		return 0;
}
