#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np,x,y,z;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x = (k*l)/nl;
    y = (c*d);
    z = p/np;
    cout<<min(x,min(y,z))/n;
    return 0;
}