#include <iostream>

using namespace std;

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    int pre1 = 1, pre2 = 2;
    int res = 0;
    for (int i = 3; i <=n; i++) {
        res = pre1 + pre2;
        pre1 = pre2;
        pre2 = res;
    }
    return res;
}

int main() {
    return 0;
}
