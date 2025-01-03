#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int mn_row=n,mn_col=m,mx_row=0,mx_col=0;
        // vector<vector<char>> v(n + 1, vector<char>(m + 1));
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         cin>>v[i][j];
        //     }
        // }
        
       for (int i = 1; i <= n; i++)
       {
            for (int j = 1; j <=m; j++)
            {
                char a;
                cin>>a;
                if (a=='#')
                {
                    mn_row = min(mn_row,i);
                    mn_col = min(mn_col,j);
                    mx_col = max(mx_col,j);
                    mx_row = max(mx_row,i);
                }
                
            }
       }
       cout<<(mn_row+mx_row)/2<<" "<<(mn_col+mx_col)/2<<endl;
        
    }
    
    return 0;
}