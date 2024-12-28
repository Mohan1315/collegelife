#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,word="hello";
    cin>>s;

    int j=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==word[j] && j<5){
            j++;
        }
        if(j==5){
            break;
        }
    }
    if (j==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
        
    
    
    return 0;
}