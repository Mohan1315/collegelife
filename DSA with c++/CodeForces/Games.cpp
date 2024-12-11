#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,g,count=0;
    cin>>n;
    int host[n];
    int guest[n];
    
    
   for (int i = 0; i < n; i++){
        cin>>h>>g;
        host[i]=h;
        guest[i]=g;
   }
   for (int i = 0; i < n; i++){
        for (int j= 0; j < n; j++){
            if(host[i]==guest[j]){
                count++;
            }
        }
   }
   cout<<count;
   
   
  
    
    return 0;
}