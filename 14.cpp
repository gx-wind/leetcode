#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubstring(string s1, string s2) {
    auto res = mismatch(s1.begin(), s1.end(), s2.begin());
    if (res.first == s1.end())
        return true;
    return false;
}

string longestCommonPrefix(vector<string>& strs) {
    int minLen = INT_MAX, i, minI, k;
    int res = 0;
    string resStr;
    for (i = 0; i < strs.size(); i++) {
        int l = strs[i].size();
        if (l < minLen) {
            minI = i;
            minLen = l;
        }
    }
    for (int j = 1; j <= strs[minI].size(); j++) {
        string s1 = strs[minI].substr(0, j);
        for(k = 0; k < strs.size(); k++) {
            if (!isSubstring(s1, strs[k]))
                break;
        }
        if (k == strs.size()) {
            if (j > res) {
                res = j;
                resStr = s1;
            }
        }
    }
    return resStr;
}

int main() {
    return 0;
}
