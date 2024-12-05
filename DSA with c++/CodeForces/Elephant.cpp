#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res=0;
    cin>> n;
    
    while (n>0)
    {
        if(n>=5){
            res = res+ n/5;
            n = n%5;
        }else{
            res++;
            n = 0;
        }
        
    }
    cout<<res;
    
    return 0;
}