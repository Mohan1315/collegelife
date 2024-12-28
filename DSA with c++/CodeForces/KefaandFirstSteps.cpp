#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,maxSub=0;
    int x = 0,res=0;
    cin>>n;
    while (n--)
    {
    
        cin>>a;
        if(x<=a){
            res++;
            x=a;
            maxSub = max(maxSub,res);
        }else{
            maxSub = max(maxSub,res);
            res=1;
            x=a;
        }
    }
    cout<<maxSub;
    
    return 0;
}