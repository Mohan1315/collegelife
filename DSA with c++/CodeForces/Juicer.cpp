#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,b,d,sum=0,count=0,a;
        cin>>n>>b>>d;
        
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            if (a<=b)
            {
                sum+=a;
            }
            
            if (sum>d)
            {
                sum=0;
                count++;
            }
            
        }
        cout<<count<<endl;
        
    
    
    return 0;
}