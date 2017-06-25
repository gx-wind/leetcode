#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int len = nums.size();
    int a1 = nums[0]*nums[1]*nums[2];
    int a2 = nums[len-1]*nums[len-2]*nums[len-3];
    int a3 = nums[0]*nums[1]*nums[len-1];
    int a4 = nums[0]*nums[len-1]*nums[len-2];
    return max(max(a1,a2),max(a3,a4));
}

int main() {
    return 0;
}
