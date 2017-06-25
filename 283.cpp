#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int zeroNum = 0;
    int i,k = 0;
    for (i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            zeroNum++;
        } else {
            nums[k++] = nums[i];
        }
    }
    for (i = nums.size()-1; i > nums.size()-zeroNum-1; i--)
        nums[i] = 0;
}



int main() {
    return 0;
}
