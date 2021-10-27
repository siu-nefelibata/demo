#include <iostream>

using namespace std;

int main()
{
    //Khai bao bien
    int a;
    int luong;
    //Hien thi "So gio lam viec trong thang"
    cout << "So gio lam viec trong thang: ";
    //Nhap a
    cin >> a;
    if (a < 50)
    {
        luong = a*100000;
        cout << "So tien luong = " << luong << endl;
        }
    else if (a < 70)
    {luong = a*110000;}

    else if (a < 100)
    {luong = a*120000;}
        
    else if (a < 150)
    {luong = a*140000;}
    
    else luong = a*150000;
    cout << "So tien luong = " << luong << endl;

    }
    