#include<bits/stdc++.h>
using namespace std;

int main(){

    int mx=INT_MIN, mn=INT_MAX, s=0, x,t;
    cin>>t;
    while (t--)
    {
        cin>>x;
        if(x>mx || x<mn){
            s++;
        }
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout<<s-1;
    
    return 0;
}