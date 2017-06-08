#include <iostream>
#include <vector>

using namespace std;

void search(vector<vector<int> >& res, vector<int>& combination, int n, int k, int depth, int begin) {
    if (depth == k) {
        res.push_back(combination);
        return;
    }
    for (int i = begin; i <= n; i++) {
        combination.push_back(i);
        search(res, combination, n, k, depth+1, i+1);
        combination.pop_back();
    }
}

vector<vector<int> > combine(int n, int k) {
    vector<vector<int> > res;
    vector<int> combination;
    search(res, combination, n, k, 0, 1);
    return res;
}

int main() {
    return 0;
}
