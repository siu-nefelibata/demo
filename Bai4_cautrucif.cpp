#include <iostream>

using namespace std;

int main()
{
    //Khai bao bien a
    int a;
    // Hien thi "a = "
    cout << "a = ";
    //Nhap a
    cin >> a; 
    //Kiem tra a chia het cho 5
    if (a%5==0)
    {
        a += 10;
    }
    else a -= 10;
    //Hien thi ket qua
    cout << a << endl;
}