#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    long long count=0,num=1;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a;
        if(num>a){
            count=count+(n-num)+1;
            num=1;
        }
        count=count+ abs(a-num);
        num=a;
        
    }
    cout<<count;
    return 0;
}