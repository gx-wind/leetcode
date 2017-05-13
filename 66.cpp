#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int len = digits.size();
    int c = 1;
    for (int i = len-1; i >= 0; i--) {
        int tmp = (digits[i]+c)/10;
        digits[i] = (digits[i] + c)%10;
        c = tmp;
    }
    if (c != 0) {
        digits.insert(digits.begin(), c);
    }
    return digits;
}

int main() {
    return 0;
}
