#include <iostream>

using namespace std;

int main ()
{
    int i=1;
    int n;
    float kqua;
    int giaithua=1;
    do
    {
        cout << "n = ";
        cin >> n;
    } while (n%3 != 0);
    if (n < 3)
    {
        cout << "(n-3) khong co giai thua" << endl;
        cout << "khong tinh duoc ket qua" << endl;
    }
    else if (n == 3)
    {
        giaithua = 1;
        kqua = (float)giaithua/2;
        cout << "ket qua: " << kqua << endl;
    }
    else{
        for (i = 1; i <= (n=3); i++)
        {
            giaithua *= i;
        }
        kqua = (float)giaithua/2;
        cout << "ket qua: " << kqua << endl;
    }
    return 0;
}