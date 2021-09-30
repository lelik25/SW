#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cout << "Vvedite chislo a=";
    cin >> a;
    while (a)
    {
        cout << a % 10 << endl;
        a /= 10;
    }
    return 0;
}
