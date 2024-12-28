#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],a,sum=0,count=0,sum1=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        arr[i]=a;
        sum+=a;

    }
    sort(arr,arr+n);

  

    for (int i = n-1; i >= 0; i--)
    {

        sum1+=arr[i];
        count++;
        if (sum1>(sum-sum1))
        {
            break;
        }
        
    }
    cout<<count;
    
    
    return 0;
}