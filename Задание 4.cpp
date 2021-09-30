#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, h, r;
	cout << "Введите длинну параллелепипеда а=" ;
	cin >> a;
	cout << "Введите ширину параллелепипеда b=" ;
	cin >> b;
	cout << "Введите высоту параллелепипеда с=" ;
	cin >> c;
	cout << "Введите длину отверстия h="  ;
	cin >> h;
	cout << "Введите высоту отверстия r=" ;
	cin >> r;
	switch ((b <= h) && (c <= r) ? 1 : (a <= h) && (c <= r) ? 2 : (a <= h) && (b <= r) ? 3 : (b <=r) && (a<=h)? 4 : (c<=h)&&(a<=r)? 5:(b<=r)&&(c<=h)?6: -1)
	{
	case 1: cout << "Проходит" << endl; break;
	case 2: cout << "Проходит" << endl; break;
	case 3: cout << "Проходит" << endl; break;
	case 4: cout << "Проходит" << endl; break;
	case 5: cout << "Проходит" << endl; break;
	case 6: cout << "Проходит" << endl; break;
	default: cout << "Параллелепипед не прошёл через отверстие" << endl;          
	}
	return 0;
}
