#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int a[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    for(int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }

}