#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int upCase=0;
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]<'a'){
            upCase++;
        }
    }
    if(upCase>(s.size()-upCase)){
        for (auto &a : s)
        {
            a = toupper(a);
        }
        
    }else{
        for (auto &a : s)
        {
            a = tolower(a);
        }
        
    }
    cout<<s;
    
    return 0;
}