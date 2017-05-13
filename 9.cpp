#include <climits>
#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x%10==0))
        return false;
    int res = 0;
    while (x > res) {
        res = res*10 + x%10;
        x /= 10;
    }
    if (res == x || res/10 == x)
        return true;
    return false;
}

int main() {
    return 0;
}
