#include <iostream>
#include <string>
#include <vector>

using namespace std;

char findTheDifference(string s, string t) {
    vector<int> v(26, 0);
    for (int i = 0; i < t.size(); i++) {
        v[t[i]-'a']++;
    }
    for (int i = 0; i < s.size(); i++) {
        v[s[i]-'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] != 0) {
            return i+'a';
        }
    }
}

int main() {
    return 0;
}
