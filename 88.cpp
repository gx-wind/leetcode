#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1, j = n-1, k;
    while (i >= 0 && j >= 0 ){
        if (nums1[i] > nums2[j]) {
            nums1[i+j+1] = nums1[i];
            i--;
        } else {
            nums1[i+j+1] = nums2[j];
            j--;
        }
    }
    if (i < 0) {
        for (k = j; k >= 0; k--) {
            nums1[k] = nums2[k];
        }
    }
}

int main() {
    return 0;
}
