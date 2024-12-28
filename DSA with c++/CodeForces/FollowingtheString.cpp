#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,arr[]={0,0,0,1,0,2,0,3,1,1,4}; 
    cin>>t;
    while (t--)
    {
        int i=0;
        cin>>n;
        while (n--)
        {
            cin>>a;
            if (arr[i]==a && i<11 )
            {
                i++;
            }else if(i==11){
                cout<<"abracadabra";
                i=0;
            }else{
                for (int j = 0; j<= i; j++)
                {
                    cout<<'a';
                }
                i=0;
                
            }
        }
        
    }
    
    return 0;
}