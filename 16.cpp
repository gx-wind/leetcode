#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumCloset(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    if (nums.size() <= 3) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans += nums[i];
        }
        return ans;
    }
    int ans = nums[0]+nums[1]+nums[2];
    for (int i = 0; i < nums.size()-2; i++) {
        int j = i+1,k = nums.size()-1;
        while (j < k) {
            int sum = nums[i]+nums[j]+nums[k];
            if (abs(sum-target) < abs(ans-target)) {
                ans = sum;
            }
            if (sum == target) {
                return sum;
            }
            if (sum > target) 
                k--;
            else if (sum < target)
                j++;
        }
    }
    return ans;
}

int main() {
    return 0;
}
