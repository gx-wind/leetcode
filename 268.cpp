#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int sum = (1+nums.size())*nums.size()/2;
    int t = 0;
    for (int i = 0; i < nums.size(); i++) {
        t += nums[i];
    }
    return sum-t;
}

int main() {
    return 0;
}
