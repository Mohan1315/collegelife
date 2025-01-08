#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int mx = v[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(mx,v[i]-v[i-1]);
    }
    mx = max(mx,2*(x-v[n-1]));
    cout<<mx<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
            solve();
    }
    
    return 0;
}