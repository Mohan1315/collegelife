#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x;
    
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int> v;
        while(n>=10){
            if(n>1000 && n<=9999){
                x = (n/1000)*1000;
                n=n%1000;
                v.push_back(x);
            }
            else if(n>100 && n<=999){
                x = (n/100)*100;
                n=n%100;
                v.push_back(x);
            }
            else if(n>10 && n<=99){
                x = (n/10)*10;
                n=n%10;
                v.push_back(x);
            }else{
                break;
            }
        }
        if(n!=0){
            v.push_back(n);
        }
        
        cout<<v.size()<<endl;
        for(int a : v){
            cout<<a<<" ";
        }
        cout<<endl;
    
    }
    
    return 0;
}