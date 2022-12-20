#include<bits/stdc++.h>
using namespace std;

string reverse(string s, int len) {
    string temp = "";
    if (len == 0) return temp;
    temp += s[0];
    s.erase(0, 1);
    return reverse(s, len - 1) + temp;
}

int main() {
    string s = "ABCDEFG";
    cout << reverse(s, s.length());
}
