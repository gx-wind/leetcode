#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    vector<int> v(prices.size());
    for (int i = 0;i < prices.size(); i++) {
        if (i == 0) {
            v[i] = 0;
        }
        v[i] = prices[i] - prices[i-1];
    }
    int res = 0, pre = 0;
    for (int i = 1; i < v.size(); i++) {
        if (pre < 0) {
            pre = v[i];
        } else {
            pre = pre + v[i];
        }
        res = max(pre, res);
    }
    if (res < 0) {
        return 0;
    }
    return res;
}

int main() {
    return 0;
}
