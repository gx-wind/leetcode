#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

static bool cmp(const string& s1, const string& s2) {
    return s1+s2 > s2+s1;
}

string largestNumber(vector<int>& nums) {
    vector<string> strs;
    for (int i = 0; i < nums.size(); i++) {
        string s = to_string(nums[i]);
        strs.push_back(s);
    }
    sort(strs.begin(), strs.end(), cmp);
    string res;
    for (int i = 0; i < strs.size(); i++) {
        res += strs[i];
    }
    while (res[0] == '0' && res.size() > 1) {
        res.erase(0,1);
    }
    return res;
}

int main() {
    return 0;
}
