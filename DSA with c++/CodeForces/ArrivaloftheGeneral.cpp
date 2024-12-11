#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,mx=0,mn=101,mxInd=0,mnInd=0,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(mx<x){
            mx=x;
            mxInd = i;
        }
        if(mn>=x){
            mn = x;
            mnInd = i;
        }
    }
    
    cout<< (mxInd)+((n)-mnInd-1)-(mxInd>mnInd);
    
    return 0;
    
}