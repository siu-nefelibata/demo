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
    //Kiem tra a >= 0
    if (a >= 0){
        if (a%2==0) {
            cout << "a la so chan" << endl;
        }
        else {
            cout << a << " la so le" << endl;
        }
    }
    else {
        cout << a << " la so am" << endl;
    }

}