#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p,q,x;
    cin>>n;
    set<int> st;
    cin>>p;
    while (p--)
    {
        cin>>x;
        st.insert(x);
    }
    cin>>q;
    while (q--)
    {
        cin>>x;
        st.insert(x);
    }

    if(st.size()==n)
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    
    
    return 0;
}