#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s="";
    for (int i = 1; i <= n-1; i++)
    {
        if((i%2) ==0){
            s=s+"I love that ";
        }else{
            
            s=s+"I hate that ";
        }
    }

    if(n%2!=0){
        s = s+"I hate it";
    }else{
        s = s+"I love it";
    }
    cout << s;
    
    return 0;
}