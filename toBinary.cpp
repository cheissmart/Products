#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void printBin(int n) {
    cout << "The binary of " << n << " is "; 
    int mask = 1 << 31;
    for(int i=0;i<32;i++) {
        cout << ((mask & n) ? 1 : 0);
        mask >>= 1;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << " Enter a number:";
    cin >> n;
    printBin(n);
}
