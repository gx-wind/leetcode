#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> p;

void pre(string s) {
    int j = 0;
    p.push_back(0);
    for (int i = 1; i < s.size(); i++) {
        while (j > 0 && s[i] != s[j])
            j = p[j-1];
        if (s[i] == s[j])
            j++;
        p.push_back(j);
    }
}

int strStr(string haystack, string needle) {
    pre(needle);
    int j = 0;
    for (int i = 0; i < haystack.size(); i++) {
        while (j > 0 && haystack[i] != needle[j]) {
            j = p[j-1];
        }
        if (haystack[i] == needle[j])
            j++;
        if (j == needle.size())
            return i-j+1;
    }
    return -1;
}

int main() {
    //string s = "issip";
    string s = "aabaaac";
    pre(s);
    for(int i = 0; i < p.size(); i++)
        cout << p[i] << " ";
    cout << endl;
    cout << strStr("aabaaabaaac", s) << endl;

    return 0;
}
