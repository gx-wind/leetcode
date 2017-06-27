#include <iostream>

using namespace std;

bool isBadVersion(int version);

int firstBadVersion(int n) {
    int b = 1, e = n;
    while (b < e) {
        int m = (e-b)/2+b;
        if (!isBadVersion(m)) {
            b = m+1;
        } else {
            e = m;
        }
    }
    return b;
}

int main() {
    return 0;
}
