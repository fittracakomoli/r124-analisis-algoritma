#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int b[n];

    for(int i=0; i<n; i++) {
        if(a[i] < a[i+1]) {
            a[i] = b[i];
        }

        cout << b[i] << endl;
    }

}