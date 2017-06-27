#include <iostream>

using namespace std;

int findComplement(int num) {
    int a = num;
    int sum = 1;
    while (a) {
        sum <<= 1;
        a >>= 1;
    }
    return sum-1-num;
}

int main() {
    return 0;
}
