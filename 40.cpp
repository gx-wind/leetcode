#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void search(vector<vector<int> >& res, int target, vector<int>& candidates, vector<int>& combination, int index) {
    if (target == 0) {
        res.push_back(combination);
        return;
    }
    for (int i = index; i < candidates.size() && candidates[i] <= target; i++) {
        if (i == index || candidates[i] != candidates[i-1]) {
            combination.push_back(candidates[i]);
            search(res, target-candidates[i], candidates, combination, i+1);
            combination.pop_back();
        }
    }
}

vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int> > res;
    vector<int> combination;
    search(res, target, candidates, combination, 0);
    return res;
}

int main() {
    return 0;
}
