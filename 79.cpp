#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<vector<char> > &board,vector<vector<int> > &visited, int index, string word, int i, int j, int m, int n) {
    if (index == word.size())
        return true;
    if (i < 0 || j < 0 || i >= m || j >= n || visited[i][j] == true || word[index] != board[i][j])
        return false;
    visited[i][j] = 1;
    //cur += board[i][j];
    //cout << cur << " " << word << endl;
    //if (cur == word)
    //    return true;
    bool res = false;
    if (index <= word.size()) {
        bool v1 = dfs(board, visited, index+1, word, i+1, j, m, n);
        bool v2 = dfs(board, visited, index+1, word, i-1, j, m, n);
        bool v3 = dfs(board, visited, index+1, word, i, j+1, m, n);
        bool v4 = dfs(board, visited, index+1, word, i, j-1, m, n);
        if (v1 || v2 || v3 || v4)
            return true;
    }
    visited[i][j] = false;
    return false;
}

bool exist(vector<vector<char> > &board, string word) {
    // write your code here
    if (word == "")
        return true;
    if (board.size() == 0)
        return false;
    int m = board.size();
    int n = board[0].size();
    bool isExisted = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == word[0]) {
                vector<vector<int> > isVisited(m, vector<int>(n, 0));
                //string cur = "";
                isExisted = dfs(board, isVisited, 0, word, i, j, m, n); 
                if (isExisted) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char> > board;
    string s1 = "AAA";
    string s2 = "AAA";
    string s3 = "AAB";
    vector<char> v1;
    vector<char> v2;
    vector<char> v3;
    for (int i = 0; i < s1.size(); i++)
        v1.push_back(s1[i]);
    for (int i = 0; i < s2.size(); i++)
        v2.push_back(s2[i]);
    for (int i = 0; i < s3.size(); i++)
        v3.push_back(s3[i]);
    board.push_back(v1);
    board.push_back(v2);
    board.push_back(v3);
    cout << exist(board, "BAAAAAAAA") << endl;
    return 0;
}

