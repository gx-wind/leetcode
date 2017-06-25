#include <iostream>

using namespace std;

bool isPerfectSquare(int num) {
    int b = 1, e = num;
    while (b <= e) {
        long m = (e-b)/2+b;
        if (m*m == num) {
            return true;
        } else if (m*m > num) {
            e = m-1;
        } else {
            b = m+1;
        }
    }
    return false;
}

int main() {
    return 0;
}
