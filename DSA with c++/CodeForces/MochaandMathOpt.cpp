#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
        int n,a;
        cin>>n;
        int minimal;
        cin>>minimal;
        for (int i = 2; i <= n; i++)
        {
            cin>>a;
            minimal = minimal&a;
        }
        
        cout<<minimal<<endl;

    }
    

    return 0;
}