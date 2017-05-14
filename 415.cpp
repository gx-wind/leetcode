#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    string res;
    int i = 0, c = 0;
    for (i = 0; i < num1.size() || i < num2.size(); i++) {
        if (i < num1.size()) {
            c += num1[i]-'0';
        }
        if (i < num2.size()) {
            c += num2[i]-'0';
        }
        res += c%10 + '0';
        c /= 10;
    }
    if (c != 0) {
        res += c+'0';
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string num1 = "123", num2 = "123";
    cout << addStrings(num1, num2) << endl;
    return 0;
}
