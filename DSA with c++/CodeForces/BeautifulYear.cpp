#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    n++;

    while (true)
    {
        int a=n%10, b = (n/10)%10, c = (n/100)%10,d=n/1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << n;
            break;
        }
        n++;
    }
    
    return 0;
}