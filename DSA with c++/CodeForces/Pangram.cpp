#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    set<char> st;

    cin>>n>>s;
    if(n<26){
        cout<<"NO";
    }else{
        for(auto &c : s){
           st.insert(tolower(c));
        }
        if (st.size()==26)
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
    }

    return 0;
}