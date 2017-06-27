#include <iostream>

using namespace std;

int hammingDistance(int x, int y) {
    int z = x^y;
    int res = 0;
    while (z) {
        res += (z&1);
        z >>= 1;
    }
    return res;
}

int main() {
    return 0;
}
