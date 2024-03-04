#include <iostream>
#include <iomanip>

using namespace std;
void printMatrix(int** matrix, int a) {

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

