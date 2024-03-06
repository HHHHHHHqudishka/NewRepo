#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;


void printMatrix(int** matrix, int a) {
    int k = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << setw(2) << matrix[i][j] << " ";
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

    int NullCntr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (matrix[i][j] == 0)
            {
                NullCntr++;
            }
        }
        if (NullCntr == a)
        {
            cout << "точка " << i + 1 << " тупик" << endl;
        }
        NullCntr = 0;
    }


    int printMatrix(int& matrix) {
        ;

    }
    vector<vector<int>> vectorOfArrays;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (matrix[i][j] == 1) {
                for (int l = 0; l < a; l++) {
                    if (matrix[j][l] == 1){
                        

                }
                
            }
        }
    }

    // Создаем и добавляем несколько массивов в вектор
    std::vector<int> array1 = { 1, 2, 3 };
    std::vector<int> array2 = { 4, 5, 6 };
    std::vector<int> array3 = { 7, 8, 9 };

    vectorOfArrays.push_back(array1);
    vectorOfArrays.push_back(array2);
    vectorOfArrays.push_back(array3);

  


}