#include <iostream>

using namespace std;

int process(int n) {
    int res = 0;
    while (n) {
        res += (n%10)*(n%10);
        n /= 10;
    }
    return res;
}

bool isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = process(slow);
        fast = process(fast);
        fast = process(fast);
    } while (slow != fast);
    if (slow == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    return 0;
}
