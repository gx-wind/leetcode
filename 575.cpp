#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

int distributeCandies(vector<int>& candies) {
    set<int> s;
    int res = candies.size()/2;
    for (int i = 0; i < candies.size(); i++) {
        s.insert(candies[i]);
    }
    if (res < s.size()) {
        return res;
    } 
    return s.size();
}

int main() {
    return 0;
}
