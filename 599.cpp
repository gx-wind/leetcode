#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> res;
    unordered_map<string, int> m;
    int minValue = INT_MAX;
    for (int i = 0; i < list1.size(); i++) {
        m[list1[i]] = i;
    }
    for (int i = 0; i < list2.size(); i++) {
        if (m.count(list2[i]) != 0) {
            if (m[list2[i]] + i < minValue) {
                minValue = m[list2[i]] + i;
                res.clear();
                res.push_back(list2[i]);
            } else if (m[list2[i]] + i == minValue) {
                res.push_back(list2[i]);
            }
        }
    }
    return res;
}

int main() {
    return 0;
}
