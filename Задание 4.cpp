#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double dlinaPar, shirinaPar, vviotaPar, dlinaOtv, vvisotaOtv;
	cout << "Введите длинну параллелепипеда а=" ;
	cin >> dlinaPar;
	cout << "Введите ширину параллелепипеда b=" ;
	cin >> shirinaPar;
	cout << "Введите высоту параллелепипеда с=" ;
	cin >> vviotaPar;
	cout << "Введите длину отверстия h="  ;
	cin >> dlinaOtv;
	cout << "Введите высоту отверстия r=" ;
	cin >> vvisotaOtv;
	switch ((shirinaPar <= dlinaOtv) && (vviotaPar <= vvisotaOtv) ? 1 : (dlinaPar <= dlinaOtv) && (vviotaPar <= vvisotaOtv) ? 2 : (dlinaPar <= dlinaOtv) && (shirinaPar <= vvisotaOtv) ? 3 : (shirinaPar <= vvisotaOtv) && (dlinaPar <= dlinaOtv)? 4 : (vviotaPar <= dlinaOtv)&&(dlinaPar <= vvisotaOtv)? 5:(shirinaPar <= vvisotaOtv)&&(vviotaPar <= dlinaOtv)?6: -1)
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
