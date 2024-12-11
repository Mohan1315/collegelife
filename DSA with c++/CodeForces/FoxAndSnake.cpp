#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    bool first=true;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        if ((i%2)!=0)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<'#';
            } 
        }else{
            if(first){
                for (int j = 0; j < m-1; j++)
                {
                    cout<<'.';
                }
                cout<<'#'; 
                first=false;
            }else{
                cout<<'#'; 
                 for (int j = 0; j < m-1; j++){
                        cout<<'.';
                    }
                first=true;
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}