#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, char> m;
    for (int i = 0; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            m[s[i]] = t[i];
        } else if (m[s[i]] != t[i]) {
            return false;
        }
    }
    swap(s,t);
    m.clear();
    for (int i = 0; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            m[s[i]] = t[i];
        } else if (m[s[i]] != t[i]) {
            return false;
        }
    }
    return true;
}

int main() {
}
