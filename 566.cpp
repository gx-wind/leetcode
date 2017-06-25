#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > matrixReshape(vector<vector<int> >& nums, int r, int c) {
    int m = nums.size();
    if (m == 0) {
        return nums;
    }
    int n = nums[0].size();
    if (m*n != r*c) {
        return nums;
    }

    vector<vector<int> > vv(r, vector<int>(c));
    vector<int> v;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            v.push_back(nums[i][j]);
        }
    }
    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            vv[i][j] = v[k++];
        }
    }
    return vv;
}

int main() {
    return 0;
}
