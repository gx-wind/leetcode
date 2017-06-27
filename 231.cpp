#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;
    if ((n&(n-1)) == 0) {
        return true;
    }
    return false;
}

int main() {
    return 0;
}
