#include<bits/stdc++.h>
using namespace std;

bool search(int *arr, int low, int high, int key)
{
    int mid = (high + low) / 2;

    if(low > high) return false;
    if(arr[mid] == key) return true;
    if(arr[mid] < key) return search(arr, mid + 1, high, key);
    else return search(arr, low, mid - 1, key);

}

int main()
{
    int arr[5] = {2, 5, 8, 10, 22};
    int low = 0, high = 4, key = 10;
    search(arr, low, high, key) ? cout << "Present" : cout << "Absent";
}