#include<bits/stdc++.h>
using namespace std;

int sumArr(int *arr, int size) {
    int sum = 0;
    if(size == 0) return 0;
    if(size == 1) return arr[0];
    sum += arr [0] + sumArr(arr + 1, size - 1);
    return sum;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    cout << sumArr(arr, 4);
}