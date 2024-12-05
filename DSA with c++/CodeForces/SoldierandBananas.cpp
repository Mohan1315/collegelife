#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,i=1,borrow=0;
    cin>>k>>n>>w;
    while (w--)
    {
        borrow += k*i;
        i++;
    }
    if(borrow>n){
        cout<<borrow-n;
    }else{
        cout << 0;
    }
    return 0;
}