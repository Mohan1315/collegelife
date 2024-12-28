#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    if((n+1)/2>=k){
        cout<<k*2-1;
    }
    else{
        cout<<2*(k-(n+1)/2);
    }
    return 0;
}