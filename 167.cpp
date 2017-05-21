#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> v;
    int i=0, j = numbers.size()-1;
    while (i < j) {
        if (target- numbers[i] == numbers[j]) {
            v.push_back(i+1);
            v.push_back(j+1);
            break;
        } else if(target-numbers[i] > numbers[j]) {
            i++;
        } else {
            j--;
        }
    }
    return v;
}


int main() {
    return 0;
}
