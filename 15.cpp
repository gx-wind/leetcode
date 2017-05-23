#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int> > vv;
    for (int i = 0; i < nums.size(); i++) {
        int b = i+1, e = nums.size()-1;
        while (b < e) {
            if (nums[b]+nums[e] + nums[i] == 0) {
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[b]);
                v.push_back(nums[e]);
                vv.push_back(v);
                while (b < e && nums[b] == v[1]) b++;
                while (b < e && nums[e] == v[2]) e--;
            } else if (nums[b]+ nums[e] + nums[i] < 0) {
                b++;
            } else {
                e--;
            }
        }
        while (i < nums.size()-1 && nums[i] == nums[i+1])
            i++;
    }
    return vv;
}

int main() {
    int arr[] = {-1, 0, 1, 2, -1, -4};
    vector<int> v(arr, arr+sizeof(arr)/sizeof(arr[0]));
    vector<int> v1;
    vector<vector<int> > vv = threeSum(v1);
    for (int i = 0;i < vv.size(); i++) {
        for (int j = 0; j < vv[i].size(); j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
