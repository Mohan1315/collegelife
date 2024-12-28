#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt = "ABCEABEFABCD";
    string pat = "ABCD";
    int n=12,m=4;
    for (int i = 0; i <= n-m;)
    {
        int j;
        for ( j = 0; j < m; j++)
        {
            if(pat[j]!=txt[i+j]){
                break;
            }
        }
        cout<<j<<" ";
        // if(j==m){
        //     cout<<i<<" ";
        // }

        if(j==0){ 
            i++;
        }else{
            i= i+j;
        }
    }
    
    
    return 0;
}