#include <iostream>

using namespace std;

int arrangeCoins(int n) {
    int b = 0, e = n;
    while (b <= e) {
        int m = (b+e)>>1;
        if (0.5*m*(m+1) <= n) {
            b = m+1;
        } else {
            e = m-1;
        }
    }
    return b-1;
}


int main() {
    return 0;
}
