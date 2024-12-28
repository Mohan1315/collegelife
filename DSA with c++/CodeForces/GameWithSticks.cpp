#include<iostream>
using namespace std;

int main(){
    int n,m,x;
    cin>>n>>m;
    x= min(n,m);
    if((x&1)==1){
        cout<<"Akshat";
    }else{
        cout<<"Malvika";
    }

    return 0;
}