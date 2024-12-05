#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,A=0;
    string s;
    cin>> n>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'){
            A++;
        }
    }
    if(A>s.size()-A){
        cout<<"Anton";
    }else if(A==s.size()-A){
        cout << "Friendship";
    }else{
        cout<<"Danik";
    }
    return 0; 
}