#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,billCount=0;
    cin>>n;
    if (n>=100)
    {
        billCount+=(n/100);
        n = n%100;
    }
    if (n<100 && n>=20)
    {
        billCount+=(n/20);
        n = n%20;
    }
    if (n<20 && n>=10)
    {
        billCount+=(n/10);
        n = n%10;
    }
    if (n<10 && n>=5)
    {
        billCount+=(n/5);
        n = n%5;
    }
    cout<<billCount+n;


    return 0;
}