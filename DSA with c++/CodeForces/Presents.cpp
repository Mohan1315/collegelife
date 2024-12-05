#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[101],a;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>a;
        arr[a]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<arr[i]<< " ";
    }
    
    return 0;
}