#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s, int len) {
    string temp = "";
    if (len == 0) return temp;
    temp += s[0];
    s.erase(0, 1);
    return isPalindrome(s, len - 1) + temp;
    
}

int main() {
    string s = "MOM";
    string result = isPalindrome(s, s.length());
    if(s == result) cout << "True";
    else cout << "False";
}