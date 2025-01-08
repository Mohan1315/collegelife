#include<iostream>
using namespace std;

int main(){
    int t;
    long long n,k,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>x;
        if ((2*x)>=k*(k+1)&&(2*x)<= n*(n+1) - (n-k)*(n-k+1))
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}