#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    int len1 = a.size(), len2 = b.size();
    int i;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res;
    int c = 0;
    for (i=0; i < len1 || i < len2; i++){
        if (i < len1)
            c += a[i]-'0';
        if (i < len2) 
            c += b[i] -'0';
        res  += c%2 + '0';
        c /= 2;
    }
    if (c != 0) {
        res += c+ '0';
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string a = "11", b = "1";
    cout << addBinary(a, b) << endl;
    return 0;
}
