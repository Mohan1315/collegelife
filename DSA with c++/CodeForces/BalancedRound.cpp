
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int s=0,sl=0,n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1])<=k){
                s++;
            }else{
                s=0;
            }
            sl=max(s,sl);
        }
        cout<<n-sl-1<<endl;
    }
}