#include<bits/stdc++.h>
using namespace std;


bool isSorted(int *arr, int size) {
    bool ans;
    if(size == 0 || size == 1) return true;
    if(arr[0] > arr[1]) return false;
    else ans = isSorted(arr + 1, size - 1);
    return ans;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    bool ans = isSorted(arr, 4); 
    ans ? cout << "Array is sorted." : cout << "Array is not sorted.";
}

