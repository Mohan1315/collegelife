#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a = s.find('H')+s.find('Q')+s.find('9');
    if(a==-3){
        cout<<"NO";
    }  else{
        cout<<"YES";
    }  
    return 0;
}