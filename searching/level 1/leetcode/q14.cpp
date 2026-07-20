#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<bool> zeroRow(rows, false);
    vector<bool> zeroCol(cols, false);

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] == 0) {
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            if (zeroRow[i] || zeroCol[j])
                matrix[i][j] = 0;
        }
    }
}

int main() {

    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    for (auto row : matrix) {

        for (int num : row)
            cout << num << " ";

        cout << endl;
    }

    return 0;
}