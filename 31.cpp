#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i,j;
    for (i = n-1; i > 0; i--) {
        if (nums[i] > nums[i-1]) 
            break;
    }
    if (i == 0) {
        reverse(nums.begin(), nums.end());
        return;
    }
    for (j = n-1; j > i-1; j--) {
        if (nums[j] > nums[i-1])
            break;
    }
    swap(nums[j], nums[i-1]);
    sort(nums.begin()+i, nums.end());
    // for (i = 0; i < n; i++) {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    nextPermutation(v);
    return 0;
}
