#include <iostream>

using namespace std;

bool isPowerOfFour(int num) {
    return (num > 0) && ((num&(num-1)) == 0) && ((num&0x55555555) != 0);
}

int main() {
    return 0;
}