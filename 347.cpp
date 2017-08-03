#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> v;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }

    priority_queue<pair<int, int> > mypq;
    for (auto it = m.begin(); it != m.end(); it++) {
        mypq.push(make_pair(it->second, it->first));
        if (mypq.size() > (int)m.size()-k) {
            v.push_back(mypq.top().second);
            mypq.pop();
        }
    }
    return v;
}

int main() {
    return 0;
}
