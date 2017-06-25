#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int res = 0;
    int len = flowerbed.size();
    if (len == 0) {
        return false;
    }
    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.insert(flowerbed.end(), 0);
    for (int i = 1; i <= len; i++) {
        if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
            res++;
            flowerbed[i] = 1;
            i++;
        }
    }
    if (res >= n) {
        return true;
    }
    return false;
}

int main() {
    return 0;
}
