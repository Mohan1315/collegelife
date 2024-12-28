#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for (int i = 0; i <= m; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int sum=0;
        int x = v[i]^v[m];
        while (x)
        {
            sum+=x&1;
            x>>=1;
        }
        if (sum<=k)
        {
            ans++;
        }
        
    }
    cout<<ans;
    
    
    return 0;
}