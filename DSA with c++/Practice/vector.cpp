#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Declare a 2D vector
    vector<vector<int>> vec;

    cout << "Enter the elements row by row (3 values per row):" << endl;

    for (int i = 0; i < n; i++) {
        vector<int> row; // Temporary vector to hold a row
        for (int j = 0; j < 3; j++) {
            int value;
            cin >> value; // Input each column value
            row.push_back(value); // Add value to the current row
        }
        vec.push_back(row); // Add the row to the 2D vector
    }

    // Print the 2D vector to verify input
    cout << "The 2D vector is:" << endl;
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
