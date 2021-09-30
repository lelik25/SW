#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    cout << "Vvedite chislo a=";
    int chislo;
    cin >> chislo;
    while (chislo)
    {
        cout << chislo % 10 << endl;
        chislo /= 10;
    }
    return 0;
}
