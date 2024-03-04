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

int main()
{
    setlocale(LC_ALL,"ru");
    int a, b;
    srand(time(NULL));
    cout << "Введите кол-во вершин: ";
    cin >> a;

    cout << "Введите кол-во рёбер: ";
    cin >> b;

    int** matrix = new int* [a];
    int counter = 0;
    for (int i = 0; i < a; i++) {
        matrix[i] = new int[a];
        for (int j = 0; j < a; j++) {
            matrix[i][j] = -1;
            if (i == j) {
                matrix[i][j] = 0;
            }
            if (j > i) {
                counter++;
            }
        }
    }

    if (b > counter) {
        cout << "Слишком много рёбер.";
        exit(0);
    }

    while (b > 0) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (j > i && matrix[i][j] == -1 && rand() % 3 == 1) {
                    b--;
                    if (b < 0) {
                        break;
                    }
                    matrix[i][j] = 1;
                    if (rand() % 5 == 1) {
                        matrix[j][i] = 1;
                    }
                    else {
                        matrix[j][i] = 0;
                    }
                }
            }
        }
    }
       
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    printMatrix(matrix, a);
  


}