#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int maxDistance(vector<vector<int> >& arrays) {
    int res = 0;
    int minValue = arrays[0][0];
    int maxValue = arrays[0][arrays[0].size()-1];
    int m = arrays.size();
    for (int i = 1; i < m; i++) {
        res = max(abs(arrays[i][0]-maxValue), res);
        res = max(abs(arrays[i][arrays[i].size()-1]-minValue), res);
        minValue = min(minValue, arrays[i][0]);
        maxValue = max(maxValue, arrays[i][arrays[i].size()-1]);
    }
    return res;
}

int main() {
    return 0;
}
