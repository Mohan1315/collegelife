#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int s1,s2,s3,s4;
    set<int> st;
    cin>>s1>>s2>>s3>>s4;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    cout<<4-st.size();


    return 0;
}