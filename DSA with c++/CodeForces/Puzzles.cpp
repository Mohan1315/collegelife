#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,arr[100],ans=1001;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for (int i = 0; i+(n-1) < m; i++)
    {
        ans = min(ans,arr[i+n-1]-arr[i]);
    }
    cout<<ans;
    
return 0;
}