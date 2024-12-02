#include<iostream>
using namespace std;

int main(){
    short t,res=0,k;

    cin>>t; //take input for test cases
    cin>>k; // take kth element

    int arr[t]; // array for take t values

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < t; j++)
    {
        if(arr[j]>=arr[k-1] && arr[j]!=0){
            res++;
        }
    }
    cout << res;
    
    
    
    return 0;
}