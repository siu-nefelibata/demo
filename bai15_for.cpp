#include <iostream>

using namespace std;

int main ()
{
    int i=1;
    int n;
    int giaithua=1;
    cout << "n = ";
    cin >> n;
    if (n < 5)
    {
        cout << "(n-5) khong co giai thua";
    }
    else if (n == 5)
    {
        giaithua = 1;
        cout << "(n-5)! = 1" << endl;
    }
    else{
        i = 1;
        while (i <= (n-5))
        {
            giaithua *= i;
            i++;
        }
        cout << "(n-5)! = " << giaithua << endl;
    }
    return 0;
}