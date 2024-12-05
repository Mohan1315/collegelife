#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,a,prev=0,count=0;
    cin>>t;
    while (t--)
    {
        cin>>a;
        if(prev!=a){
            count++;
        }
        prev =a;
    }
    cout<<count;
    

    return 0;
}