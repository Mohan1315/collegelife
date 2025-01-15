#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n,almostPrimes = 0;
    cin >> n;

    vector<int> primeCount(n + 1, 0);

    
    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 0) {  
            for (int j = i; j <= n; j += i) {
                primeCount[j]++;  
            }
        }
    }

    
    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 2) {
            almostPrimes++;
        }
    }

    cout<<almostPrimes<< endl;

    return 0;
}
