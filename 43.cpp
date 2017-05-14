#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

string multiple(string num1, string num2) {
    int len1 = num1.size(), len2 = num2.size();
    int i,j = 0;
    string res;
    vector<int> v(len1+len2, 0);
    for (i = len1-1; i >= 0; i--) {
        for (j = len2-1;j >= 0; j--) 
            v[len2-1-j+len1-1-i] += (num1[i]-'0')*(num2[j]-'0');
    }
    for (i = 0; i < len1+len2-1; i++) {
        v[i+1] += v[i]/10;
        v[i] %= 10;
    }
    while(i > 0 && !v[i]) {
        i--;
    }
    for (j = i; j >=0; j--) {
        res += v[j] +'0';
    }
    return res;
}

// string multiple(string num1, string num2) {
//     int res = 0, i, j, c, each;
//     if (num1.size() < num2.size()) {
//         swap(num1,num2);
//     }
//     for (i = num2.size()-1; i >=0; i--) {
//         c = 0;
//         each = 0;
//         for (j = num1.size()-1; j >= 0; j--) {
//             int tmp = ((num1[j]-'0')*(num2[i]-'0')+c)/10;
//             each += pow(10,num1.size()-1-j)*(((num1[j]-'0')*(num2[i]-'0')+c)%10);
//             c = tmp;
//         }
//         if (c != 0) {
//             each += pow(10, num1.size())*c;
//         }
//         //cout << each << endl;
//         res += pow(10, num2.size()-1-i)*each;
//     }
//     
//     return to_string(res);
// }

int main() {
    string s1 = "123", s2 = "456";
    cout << multiple(s1,s2) << endl;
    return 0;
}
