#include<iostream>
using namespace std;

int main(){
    int n,m,count=0,res=0;

    cin>>n>>m;
    if (n<m){
        cout<<n;
        return 0;
    }
    
    while (n!=0)
    {
        res++;
        count++;
        n--;
        if (count%m==0)
        {
            n+=1;
        }
        
    }
    cout<<res;
    
    return 0;
}