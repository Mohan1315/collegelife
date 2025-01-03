#include<iostream>
#include<string>
using namespace std;

int main(){
    char c;
    string s,letter="qwertyuiopasdfghjkl;zxcvbnm,./",word="";
    cin>>c>>s;
    for (int i = 0; i < s.length(); i++)
    {
        int p = letter.find(s[i]);
        if (c=='R')
        {
                    word+=letter[p-1];
        }else
        {
                    word+=letter[p+1];
        }
    }
    cout<<word;
    
    return 0;
}