#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,arr[12],count=0,sum=0;
    cin>>k;
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
    }

    int i=11;
    sort(arr,arr+12);
    while (sum<k && i>=0)
    {
        sum+=arr[i];
        count++;
        i--;
    }
    if(sum<k){
        cout<<-1;
    }
    else{
        cout<<count;
    }
    
    
    
    
    return 0;
}