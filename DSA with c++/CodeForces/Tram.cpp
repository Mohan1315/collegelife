#include<bits/stdc++.h>
using namespace std;

int main(){
    int res=0,t,a,b,exi=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        exi = exi - a+b;
        res = max(res,exi);
    }
    cout<<res;
    
    
    return 0;
}