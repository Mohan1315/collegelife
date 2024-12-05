#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,a;
    float ans=0;
    cin>>n;   
    t = n;

    while (t--)
    {
        cin>>a;
       ans+=a;
    }
   cout << ans/n;
    
    
    return 0;
}