#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumTotal(vector<vector<int> >& triangle) {
    int m = triangle.size();
    vector<int> v = triangle[0];
    for (int i = 1; i < m; i++) {
        v.push_back(triangle[i][i]+ v[v.size()-1]);
        for (int j = i-1; j > 0; j--) {
            v[j] = triangle[i][j] + min(v[j],v[j-1]);
        }
        v[0] += triangle[i][0];
    }
    int res = INT_MAX;
    for (int i = 0; i < v.size(); i++)
        res = min(res, v[i]);
    return res;
}

int main() {
    return 0;
}
