#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        int m=a%b;
        if(m==0){
            cout<<m<<endl;
        }else{
            cout<<b-m<<endl;
        }
        
    }
    

    return 0;
}