#include <iostream>
#include <string>

using namespace std;

string convertToTitle(int n) {
    string res;
    while (n) {
        res.insert(0,1, --n%26+ 'A');
        n /= 26;
    }
    return res;
}

int main() {
    cout << convertToTitle(26) << endl;
    return 0;
}
