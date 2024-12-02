#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int rowIndex, colIndex, res = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                rowIndex = i;
                colIndex = j;
            }
        }
    }

    if (rowIndex >= 2){
        res += rowIndex - 2;
    }else{
        res += 2 - rowIndex;
    }
    if (colIndex >= 2){
        res += colIndex - 2;
    }else{
        res += 2- colIndex ;
    }

    cout << res;

    return 0;
}