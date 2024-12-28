#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;  
    
    while (t--) {
        int n, m;
        cin >> n >> m;  
        
        int count = 0, len = 0;
        vector<string> v(n);

        for (int i = 0; i < n; i++) {
            cin>>v[i];  
            len += v[i].size();  
            if (len <= m) {
                count++;
            } 
        }

        cout << count << endl;
    }

    return 0;
}
