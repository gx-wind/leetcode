#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void depSearch(vector<vector<int> >& res, vector<int>& v, vector<int>& nums, int index, int depth) {
    if (depth == v.size()) {
        res.push_back(v);
        return;
    }
    for (int i = index; i < nums.size(); i++) {
        if (i == index || nums[i] != nums[i-1]) {
            v.push_back(nums[i]);
            depSearch(res, v, nums, i+1, depth);
            v.pop_back();
        }
    }
}

vector<vector<int> > subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int> > res;
    for (int i = 0; i <= nums.size(); i++) {
        vector<int> v;
        depSearch(res, v, nums, 0, i);
    }
    return res;
}

int main() {
    return 0;
}
