#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int j = t.size()-1,i=0,flag=0;
    if(t.size() !=s.size()){
        cout<<"NO";
        flag =1;
        j=-1;
    }
    
    
    while (j>=0){
        if(s[i]!=t[j]){
            cout<<"NO";
            flag =1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        cout << "YES";
    }
    
    return 0;
}