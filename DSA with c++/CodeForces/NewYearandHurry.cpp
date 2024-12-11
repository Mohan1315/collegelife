#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,sTime=0,rem,res=0;
    cin>>n>>k;
    rem = 240-k;
    for (int i = 1; i <=n; i++)
    {
        sTime = sTime+5*i;
        if(sTime>rem){
            
            break;
        }
        res = i;
    }
    cout<<res;
    return 0;

}