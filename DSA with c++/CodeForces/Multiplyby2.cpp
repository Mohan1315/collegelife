#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int count=0;
        while (n%6==0)
        {
            n/=6;
            count++;
        }
        while (n%3==0)
        {
            n/=3;
            count+=2;
        }
        if (n!=1)
        {
           cout<<-1<<endl;
        }else{
            cout<<count<<endl;
        }
    }
    
    return 0;
}