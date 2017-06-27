#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    sort(nums2.begin(), nums2.end());
    map<int, int> m;
    for (int i = 0; i < nums1.size(); i++) {
        m[nums1[i]] = 1;
    }
    for (int i = 0; i < nums2.size(); i++) {
        if (i == 0 || nums2[i] != nums2[i-1]) {
            if (m.find(nums2[i]) != m.end()) {
                res.push_back(nums2[i]);
            }
        }
    }
    return res;
}

int main() {
    return 0;
}
