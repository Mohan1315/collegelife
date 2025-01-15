#include<iostream>
using namespace std;

int main(){
    int k,r,i=1;
    cin>>k>>r;
    while (true)
    {
        if ((i*k)%10==0||(i*k)%10==r)
        {
            cout<<i<<endl;
            break;
        }
        i++;
        
        
    }
    
    return 0;
}