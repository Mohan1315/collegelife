#include<iostream>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;
    while (t--)
    {
        
        cin>>a>>b>>c;
        // we know that for AP -->{ b-a = c-b } so  for a : b-a.m = c-b --> b-c+b/a = m
        //assuming that if i will multiply by m with a so i can get AP
        if((b-c+b)%a==0&&(b-c+b)/a>0){
            cout<<"YES"<<endl;
        }
        //for b :  b.m-a = c-b.m --> 2b.m = c+a--> m = c+a/2b
        else if((c+a)%(2*b)==0&&(c+a)/(2*b)>0){
            cout<<"YES"<<endl;
        }
        else if ((b + b - a) % c == 0 && (b + b - a) / c > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}