#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }
        int minimal = v[1];
        for (int i = 2; i <= n; i++)
        {
            minimal = minimal&v[i];
        }
        
        cout<<minimal<<endl;

    }
    

    return 0;
}