#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if((n&(n-1))==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}