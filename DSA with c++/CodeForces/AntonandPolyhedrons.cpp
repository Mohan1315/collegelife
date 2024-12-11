#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,polyhedronsCount=0;
    cin>>n;
    string s;
    while (n--)
    {
        cin>>s;
        if(s=="Tetrahedron"){
            polyhedronsCount+=4;
        }
        else if(s=="Cube"){
            polyhedronsCount+=6;
        }
        else if(s=="Octahedron"){
            polyhedronsCount+=8;
        }
        else if(s=="Dodecahedron"){
            polyhedronsCount+=12;

        }
        else if(s=="Icosahedron"){
            polyhedronsCount+=20;
        }
    }
    cout<<polyhedronsCount;
    return 0;
}