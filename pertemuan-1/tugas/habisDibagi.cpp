#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "masukkan sebuah bilangan : ";
    cin >> x;

    if((x%2==0) || (x%3==0) || (x%7==0)) {
        cout << "benar" << endl;
    } else {
        cout << "salah" << endl;
    }

}