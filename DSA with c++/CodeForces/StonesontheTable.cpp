#include<bits/stdc++.h>
using namespace std;

int main (){
    int t,count=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0; i<t-1; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout << count;
    
    return 0;
}