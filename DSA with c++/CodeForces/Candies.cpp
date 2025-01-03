#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>n;
        int i=2;
        while (true)
        {
            x= pow(2,i) - 1;
            if((n%x) == 0){
                x = n/x;
                break;
            }else{
                i++;
            }
        }
        cout<<x<<endl;
        
    }
    
    return 0;
}