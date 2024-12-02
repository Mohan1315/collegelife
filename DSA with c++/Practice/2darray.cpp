#include<iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
    int arr[row][3];

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]; 
        }
    }
     for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}