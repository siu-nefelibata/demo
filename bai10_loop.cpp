#include <iostream>

using namespace std;

int main()
{
    int b;
    int tich = 1;
    int i = 1;
    cout << "b = ";
    cin >> b;
    for ( i = 1; i <= b; i++)
    {
        tich *= i;
    }
    cout << "b! = " << tich << endl;
}