#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x;
    cin>>t;
    while (t--)
    {
      int x,ans=0,sub=9,i=1;
      cin>>x;
      while(x !=0 && x<=45)
      {
        if(sub>x ) sub=x;
        x-= sub;
        ans+=sub*i;
        i*=10;
        sub--;
 
      }
      if(x>45) cout<<-1<<endl;
      else cout<<ans<<endl;

    }
    
    return 0;
}