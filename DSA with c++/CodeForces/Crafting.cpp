#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
        while(t--){
    
            cin>>n;
            int a[n],b[n];
            for(int i=0;i<n;i++) cin>>a[i];
            for(int j=0;j<n;j++){
                cin>>b[j];
                b[j]=b[j]-a[j];
            }
            sort(b,b+n);
            if(b[n-2]>0 || b[n-2]+b[n-1]>0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    
    return 0;

}