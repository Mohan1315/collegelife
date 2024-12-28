#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,flag = 0;
    string s;
    cin>>t;
    while (t--)
    {
        int count=0;
        cin>>n>>s;
        for (int i = 0; i < n-2; i++)
        {
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                i+=2;
                count++;
            }else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                i+=2;
                count++;
            }
            
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}