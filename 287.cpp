#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    // Write your code here
    int slow = 0, fast = 0;
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    int begin = 0;
    do {
        begin = nums[begin];
        slow = nums[slow];
    } while(begin != slow);
    return begin;
}

int main() {
    return 0;
}

