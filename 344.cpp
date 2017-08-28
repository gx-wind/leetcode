#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseString(string s) {
    int i = 0, j = s.size()-1;
    while (i < j) {
        swap(s[i++], s[j--]);
    }
    return s;
}

int main() {
    string s = "hello";
    cout << reverseString(s) << endl;
    return 0;
}
