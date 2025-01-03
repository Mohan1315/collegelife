#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,countZero=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='0')
        {
           countZero++;
        } 
    }
    cout<<n-2*min(countZero,n-countZero);

    
    return 0;
}