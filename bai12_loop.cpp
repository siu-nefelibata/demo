#include <iostream>

using namespace std;

int main()
{
    int a;
    int i=1;
    int tong=0;
    cout << "a = ";
    cin >> a;
    for (i = 1; i < a; i++)
    {
        if (i%3==0)
        {
            tong += i;
        }
    }
    cout << "tong = " << tong << endl;
}
    