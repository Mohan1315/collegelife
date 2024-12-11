#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,count=0,hired=0;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if(a>0){
            hired+=a;
            continue;
        }
        if(hired==0 && a<0){
            count++;
        }
        else{
            hired--;
        }
    }
    cout<<count;
    
    return 0;
}