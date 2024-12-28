#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int count=0,n;
        cin>>n;
        int arr[n]; 
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    
        
        for (int i = n-2; i >=0; i--)
        {
            if(arr[i+1]==0){
                count=-1;
                break;
            }
            while (arr[i+1]<=arr[i])
            {
                arr[i]=arr[i]/2;
                count++;
            }   
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}