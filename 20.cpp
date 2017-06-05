#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            st.push(')');
        else if (s[i] == '[')
            st.push(']');
        else if (s[i] == '{')
            st.push('}');
        else {
            if (st.empty())
                return false;
            if (st.top() != s[i])
                return false;
            else {
                st.pop();
            }
        }
    }
    if (st.empty())
        return true;
    else 
        return false;
}



int main() {
    return 0;
}
