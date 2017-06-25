#include <iostream>

using namespace std;

int guessNumber(int n) {
    int b = 1, e = n;
    while (b <= e) {
        int m = (e-b)/2+b;
        if (guess(m) == 1) {
            b = m+1;
        } else if (guess(m) == -1) {
            e = m-1;
        } else if (guess(m) == 0){
            return m;
        }
    }
        
}

int main() {
    return 0;
}
