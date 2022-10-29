#include<bits/stdc++.h>
using namespace std;


bool search(int *arr, int size, int key) {
    if(size == 0) return false;
    if(key == arr[0]) return true;
    else return search(arr + 1, size - 1, key);
    return 0;
}

int main() {
    int arr[5] = {3, 5, 1, 2, 6};
    search(arr, 5, 10) ? cout << "Present" : cout << "Absent"; 
}