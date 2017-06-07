#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void nextPermutation(string& s) {
    int n = s.size(), i, j;
    for (i = n-1; i > 0; i--) {
        if (s[i] > s[i-1]) {
            break;
        }
    }
    if (i == 0) {
        reverse(s.begin(), s.end());
        return;
    }
    for (j = n-1; j > i-1; j--) {
        if (s[j] > s[i-1])
            break;
    }
    swap(s[j], s[i-1]);
    sort(s.begin()+i, s.end());
}

string getPermutation(int n, int k) {
    string s;
    for (int i = 1; i <= n; i++)
        s += '0'+i;
    for (int i = 1; i < k; i++) 
        nextPermutation(s);
    return s;
}

int main() {
    cout << getPermutation(3,6) << endl;
    return 0;
}
