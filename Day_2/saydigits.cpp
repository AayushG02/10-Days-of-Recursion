#include<bits/stdc++.h>
using namespace std;

string sayDigits(int x)
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(x == 0) return "zero";
    int digit = x % 10;
    x = x / 10;
    sayDigits(x);
    cout << arr[digit] << " ";


}
int main()
{
    sayDigits(111);
}