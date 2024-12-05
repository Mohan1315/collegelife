#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int res=0;
    cin>>s;
    
    for (int i = 0; i < s.size(); i++)
    {
        
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]){
                s[j]='A';
            }
        }
        if(s[i]!='A'){
            res++;
        }
    }
    if((res&1)==1){
        cout<< "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
    
    return 0;
}