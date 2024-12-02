#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v;
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            int value;
            cout<< "enter the value : ";
            cin>> value;
            v[i].push_back(value);
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            
           cout << v[i][j];
        }
    }

    return 0;
}