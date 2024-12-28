#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        while (n--)
        {
            int t = (x/2)+10;
            if(x<=t){
                break;
            }
            x =t;
        }
        if(x<=(m*10)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}