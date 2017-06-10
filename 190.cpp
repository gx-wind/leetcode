#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n) {
    int m = 0;
    for (int i = 1; i <= 32; i++) {
        m = m|(n&1);
        n = n >> 1;
        m = m << 1;
    }
    return m;
}

int main() {
}
