#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void search(vector<vector<int> >& res, int target, vector<int>& combination, int index, int depth, int d) {
    if (depth == d) {
        if (target == 0) {
            res.push_back(combination);
        }
        return;
    }
    for (int i = index; i < 10 && i <= target ; i++) {
        combination.push_back(i);
        search(res, target-i, combination, i+1, depth+1, d);
        combination.pop_back();
    }
}

vector<vector<int> > combinationSum3(int k, int n) {
    vector<vector<int> > res;
    vector<int> combination;
    search(res, n, combination, 1, 0, k);
    return res;
}

int main() {
    return 0;
}
