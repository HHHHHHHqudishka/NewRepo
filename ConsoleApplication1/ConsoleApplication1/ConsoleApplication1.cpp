#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int** matrix, int a) {
    cout << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}

void DelMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** CopyMatrix(int** originalMatrix, int n) {
    int** copiedMatrix = new int* [n];
    for (int i = 0; i < n; i++) {
        copiedMatrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            copiedMatrix[i][j] = originalMatrix[i][j];
        }
    }
    return copiedMatrix;
}

void AtpFound(int** matrix, int i, int a)
{
    for (int j = 0; j < a; j++)
    {
        if (matrix[i][j] == 1)
        {
            matrix[i][j] = -1;
            AtpFound(matrix, j, a);
        }
        matrix[i][j] = -1;
    }
}

int main()
{
    setlocale(LC_ALL,"ru");
    int points, edges;
    srand(time(NULL));
    cout << "Введите кол-во вершин: ";
    cin >> points;
    cout << "Введите кол-во рёбер: ";
    cin >> edges;

    int** matrix = new int* [points];
    int counter = 0;
    for (int i = 0; i < points; i++) {
        matrix[i] = new int[points];
        for (int j = 0; j < points; j++) {
            matrix[i][j] = 0;
            if (j > i) {
                counter++;
            }
        }
    }

    if (edges > counter) {
        cout << "Слишком много рёбер.";
        exit(0);
    }

    while (edges > 0)
    {
        int i = rand() % (points - 1);
        int j = rand() % (points - i - 1) + i + 1;
        if (matrix[i][j] == 0)
        {
            edges--;
            matrix[i][j] = 1;
            if (rand() % 5 == 0)
            {
                matrix[j][i] = 1;
            }
        }
    }

    PrintMatrix(matrix, points);

    int nullCntr = 0;
    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < points; j++)
        {
            if (matrix[i][j] == 0)
            {
                nullCntr++;
            }
        }
        if (nullCntr == points)
        {
            cout << "Точка " << i + 1 << " тупик" << endl;
        }
        nullCntr = 0;
    }

    for (int i = 0; i < points; i++)
    {
        int** copiedMatrix = CopyMatrix(matrix, points);
        AtpFound(copiedMatrix, i, points);
        int PointCounter = 0;
        for (int point = 0; point < points; point++)
        {
            if (copiedMatrix[point][1] == -1)
            {
                PointCounter++;
            }
        }
        if (PointCounter == points)
        {
            cout << "Точка " << i + 1 << " антитупик" << endl;
        }
        DelMatrix(copiedMatrix, points);
    }
    DelMatrix(matrix, points);
    
    
    


}