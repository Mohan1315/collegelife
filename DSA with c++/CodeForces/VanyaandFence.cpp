#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,h,n,w=0;
    cin>>t>>h;
    while (t--)
    {
        cin>>n;
        if(n>h){
            w = w+2;
        }else{
            w = w+1;
        }
    }
    cout<<w;
    

    return 0;
}