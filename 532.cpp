#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int findPairs(vector<int>& nums, int k) {
    if (k < 0) {
        return 0;
    }
    map<int, int> m;
    map<int, int>::iterator it;
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end()) {
            m[nums[i]] += 1;
        } else {
            m[nums[i]] = 1;
        }
    }
    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
        if (k == 0) {
            if (it->second >= 2)
                res++;
        } else {
            if (m.find(it->first+k) != m.end()) {
                res++;
            }
        }
    }
    return res;
}

int main() {
    int a[] = {3,1,4,1,5};
    vector<int> v(a, a+sizeof(a)/sizeof(a[0]));
    cout << findPairs(v, 0);
    return 0;
}
