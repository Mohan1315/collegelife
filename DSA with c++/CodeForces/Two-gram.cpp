#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,res="";
    int mx =0,n;
    
    cin>>n>>s;
    char c1,c2;
    for (int i = 1; i < n; i++)
    {
        int count=0;
        c1 = s[i-1];
        c2 = s[i];
        for (int j = 1; j < n; j++)
        {
            if((s[j-1]==c1) && (s[j]==c2)){
                count++;
                
            } 
        }
        if (count>mx)
        {
            res= {c1,c2};
            
            mx=count;
        }
        // cout<<c1<<c2<<" ";
    }
        cout<<res;
    
    return 0;
}