#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int res = 0;
    int v = 0;
    int isCon = false;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            if (isCon) {
                v++;
            } else {
                isCon = true;
                v = 1;
            }
            res = max(res, v);
        } else {
            v = 0;
            isCon = false;
        }
    }
    return res;
}

int main() {
    
}
