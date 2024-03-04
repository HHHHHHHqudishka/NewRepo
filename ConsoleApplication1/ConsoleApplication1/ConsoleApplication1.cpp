#include <iostream>
#include <iomanip>

using namespace std;
void vivod(){

<<<<<<< HEAD
}
=======
void printMatrix(int** matrix, int a) {

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

>>>>>>> origin/vladimir
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
<<<<<<< HEAD
           
        }
    }

          for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << matrix[i][j] << " ";
=======
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
>>>>>>> origin/vladimir
        }
    }

<<<<<<< HEAD
=======
    printMatrix(matrix, a);
  
>>>>>>> origin/vladimir


}