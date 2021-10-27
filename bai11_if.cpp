#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if (a<=b+c && b<=a+c && c<=a+b)
    {
        cout << "a, b, c la so do 3 canh cua tam giac" << endl;
    }
    else {
        cout << "a, b, c khong phai la so do 3 canh cua tam giac" << endl;
    }
}
    