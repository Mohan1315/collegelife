#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int num=0,n,a,b;
        string res="";
        char c;
        cin>>n>>a>>b;
        for (int i = 1; i <= n; i++)
        {
            c='a'+num;
            res+=c;
            num++;
            if (num==b)
            {
                num=0;
            }
        }
        cout<<res<<endl;
        
    }
    

    return 0;
}