#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > generate(int numRows) {
    vector<vector<int> > v(numRows);
    int i, j;
    for (i = 0; i < numRows; i++) {
        v[i].resize(i+1);
        v[i][0] = v[i][i] = 1;
        for (j = 1; j < i; j++) {
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }
    return v;
}

int main() {
    generate(3);
    return 0;
}
