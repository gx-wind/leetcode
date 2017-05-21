#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rot(vector<int>& nums, int b, int e) {
    int i = b, j = e;
    while (i < j) {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k <= 0) 
        return;
    k = k%n;
    rot(nums, 0, n-k-1);
    rot(nums, n-k, n-1);
    rot(nums, 0, n-1);
}


int main() {
    cout << -5%3 << endl;
    return 0;
}
