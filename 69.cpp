#include <iostream>

using namespace std;

int mySqrt(int x) {
    if (x == 0) 
        return 0;
    int b = 1, e = x;
    while (b <= e) {
        int m = (e-b)/2+b;
        if (x/m < m) {
            e = m-1;
        } else {
            if (x/(m+1) < (m+1)) {
                return m;
            }
            b = m+1;
        }
    }
    return b;
}

int main() {
    return 0;
}
