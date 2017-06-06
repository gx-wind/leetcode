#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSame(vector<int>& v, int b, int e) {
    for(int i = b; i < e; i++) {
        if (v[i] == v[e])
            return false;
    }
    return true;
}

void permu(vector<vector<int> >& vv, vector<int>& nums, int i) {
    if (i == nums.size()-1) {
        vv.push_back(nums);
    }
    for (int j = i; j < nums.size(); j++) {
        if (isSame(nums, i, j)) {
            swap(nums[i], nums[j]);
            permu(vv, nums, i+1);
            swap(nums[i], nums[j]);
        }
    }
}

vector<vector<int> > permute(vector<int>& nums) {
    vector<vector<int> > vv;
    permu(vv, nums, 0);
    return vv;
}

int main() {
    vector<vector<int> > vv;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    permu(vv, v, 0);
    return 0;
}

