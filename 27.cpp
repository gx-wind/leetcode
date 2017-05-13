#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int len = nums.size();
    int begin = 0;
    for (int i = 0; i < len; i++) {
        if (nums[i] != val) {
            nums[begin++] = nums[i];
        }
    }
    return begin;
}

int main() {
    return 0;
}
