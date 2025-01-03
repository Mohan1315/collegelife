#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,Sereja=0,Dima=0,count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr ,arr+n);
    for(auto &a : arr){
        cout<<a<<" ";
    }

    // for (int i = n-1; i >= 0; i--)
    // {
    //     if (count%2 == 0)
    //     {
    //         Sereja+=arr[i];
    //     }else{
    //         Dima+=arr[i];
    //     }
    //     count++;
    // }
    // cout<<Sereja<<" "<<Dima;
    
    
    return 0;
}