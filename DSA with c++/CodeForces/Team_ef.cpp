#include<iostream>
using namespace std;

int main(){
    short t;
    cin >> t;
    
    short res =0;

    while (t--)
    {
        short a,b,c;
        cin>>a >> b>> c;
        if (a+b+c>1)
        {
            res++;
        }
    }
    cout << res;
    
    return 0;
}