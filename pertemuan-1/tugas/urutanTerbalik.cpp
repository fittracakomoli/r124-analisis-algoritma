#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Masukkan bilangan : ";
    cin >> n;

    cout << "Terbalik : ";
    for(int i = n; i >= 1; i--) {
        cout << i << " ";
    }

}