#include <iostream>
#include <vector>

using namespace std;

int lengthOfLastWord(string s) {
    int l = 0;
    bool isFirst = false;
    int len = s.size();
    for (int i = len-1; i >=0; i--) {
        if (s[i] != ' ') {
            l++;
            isFirst = true;
        } else if (s[i] == ' ' && isFirst){
            break;
        }
    }
    return l;
}

int main() {
    return 0;
}
