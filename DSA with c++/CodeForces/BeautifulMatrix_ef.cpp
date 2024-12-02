#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int rowIndex, colIndex;
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


    cout << abs(rowIndex-2)+abs(colIndex-2);

    return 0;
}