#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s) {
    if (s.size() == 0) {
        return true;
    }
    int i = 0, j = s.size()-1;
    while (i <= j) {
        while ((!isalpha(s[i])) && (!isdigit(s[i]))) {
            i++;
        }
        while ((!isalpha(s[j])) && (!isdigit(s[j]))){
            j--;
        }
        s[i] = tolower(s[i]);
        s[j] = tolower(s[j]);
        if (i <= j) {
            if (s[i] != s[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }
    }
    return true;
}

int main() {
    isPalindrome("Live on evasions? No, I save no evil.");
    return 0;
}
