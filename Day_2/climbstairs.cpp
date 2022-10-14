#include<bits/stdc++.h>
using namespace std;

int countWays(int n)
{
    if(n < 0) return 0;
    else if(n == 0) return 1;
    else return(countWays(n - 1) + countWays(n - 2));
}

int main()
{
    int n; cin >> n;
    cout << countWays(n);
}