#include <iostream>

using namespace std;

int hammingWeight(uint32_t n) {
    int res = 0;
    while (n) {
        n &= (n-1);
        res++;
    }
    return res;
}

int main() {
    return 0;
}
