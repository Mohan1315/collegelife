#include<bits/stdc++.h>
using namespace std;

int main(){
    short x,y,count=0;
    cin>>x >> y;
    while(x<=y){
        x = x*3;
        y= y*2;
        count++;
    }
    cout<<count;
    return 0;
}