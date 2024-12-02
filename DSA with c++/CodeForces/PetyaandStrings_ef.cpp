#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s1,s2;
    cin>>s1>>s2;
 
    for(auto& x:s1) x=tolower(x);
    for(auto &x:s2) x=tolower(x);
    if(s1==s2) cout<<0;
    if(s1>s2) cout<<1;
    if(s1<s2) cout<<-1;
    return 0;
}