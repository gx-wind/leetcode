#include <climits>
#include <iostream>

using namespace std;

int reverse(int x) {
    long long res = 0;
    while (x) {
        res = res*10 + x%10;
        x /= 10;
    }
    if (res > INT_MAX || res < INT_MIN) {
        return 0;
    }
    return res;
}

int main() {
    cout << reverse(-123) << endl;
    return 0;
}
