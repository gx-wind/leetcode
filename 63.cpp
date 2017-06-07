#include <iostream>
#include <vector>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
    if (obstacleGrid[0][0] == 1)
        return 0;
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    vector<vector<int> > sum(m, vector<int>(n, 1));
    int hasOne = 0;
    for (int i = 1; i < m; i++) {
        if (hasOne) {
            sum[i][0] = 0;
        } else if (obstacleGrid[i][0] == 1) {
            hasOne = 1;
            sum[i][0] = 0;
        }
    }
    hasOne = 0;
    for (int j = 1; j < n; j++) {
        if (hasOne) {
            sum[0][j] = 0;
        } else if (obstacleGrid[0][j] == 1) {
            hasOne = 1;
            sum[0][j] = 0;
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[i][j] == 1) {
                sum[i][j] = 0;
            } else {
                sum[i][j] = sum[i-1][j]+sum[i][j-1];
            }
        }
    }
    return sum[m-1][n-1];
}

int main() {
    return 0;
}
