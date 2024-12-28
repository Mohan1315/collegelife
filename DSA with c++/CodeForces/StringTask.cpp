#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    string vowels = "aeiouyAEIOUY"; 
    string res;                     

    for (char c : s) {
        if (vowels.find(c) == string::npos) { 
            res += '.';
            res += tolower(c);               
        }
    }

    cout<<res;
    return 0;
}
