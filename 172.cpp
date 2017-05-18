#include <iostream>

using namespace std;

int trailingZeroes(int n) {
    int res = 0;
    while(n) {
        res += n/5;
        n /= 5;
    }
    return res;
}

int main() {
    return 0;
}
