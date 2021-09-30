#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<algorithm>
using namespace std;

int main()
{
	srand(time(0));
	char pass[5];
	char key[10];
	for (int i = 0; i < 4; i++)
		{
			pass[i] = rand() % (57 - 48 + 1) + 48;
			cout << pass[i];
		}
	cout << endl;
	for (char i = '0'; i <= '9'; ++i)
		for (char j = '0'; j <= '9'; ++j)
			for (char k = '0'; k <= '9'; ++k)
				for (char t = '0'; t <= '9'; ++t)
					if (pass[0] == i && pass[1] == j && pass[2] == k && pass[3] == t)
						cout <<"Password is "<< i << j << k << t;
}
