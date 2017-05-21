#include <iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> v;
    for (int i = 0; i <= rowIndex; i++) {
        v.resize(i+1);
        v[0] = v[i] = 1;
        for (int j = i-1; j > 0; j--) {
            v[j] = v[j]+v[j-1];
        }
    }
    return v;
}

int main() {
    return 0;
}
