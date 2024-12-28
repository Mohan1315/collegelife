#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,count=0,len=0;
        string s;
        cin>>m>>n;
        while (m--)
        {
            cin>>s;
            len+=s.length();
            if(len<=n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}