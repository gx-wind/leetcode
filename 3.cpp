#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s.size() == 0)
        return 0;
    vector<int> v;
    int i,j;
    v.push_back(1);
    for (i = 1; i < s.size(); i++) {
        for (j = i-1; j >= i-v[i-1]; j--) {
            if (s[j] == s[i]) {
                break;
            }
        }
        v.push_back(i-j);
    }
    int maxLen = 0;
    for (i = 0; i < v.size(); i++) {
        if (v[i]> maxLen) {
            maxLen = v[i];
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
