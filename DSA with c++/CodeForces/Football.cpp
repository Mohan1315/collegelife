#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int countZero=0,countOne=0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0' && countOne < 7){
            countZero++;
            countOne=0;
        }else if(countZero<7){
            countZero=0;
            countOne++;
        }
    }
    if (countOne>=7 || countZero>=7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    return 0;
}