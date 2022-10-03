#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0) return 1; //Base Case
    else return (n * factorial(n - 1));
}
int main()
{
    int n, ans; cin >> n;
    ans = factorial(n);
    cout << ans;
}