#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int arr[row][3];
    int res=0;

    for(int i=0; i<row; i++){
        int value;
        for(int j=0; j<3; j++){
            cin >> value;
            arr[i][j] = value;
        }
    }

    for(int i=0; i<row; i++){
        int count =0;
        for(int j=0; j<3; j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if (count>=2)
        {
            res++;
        }  
    }
    cout<< res;
    return 0;
}