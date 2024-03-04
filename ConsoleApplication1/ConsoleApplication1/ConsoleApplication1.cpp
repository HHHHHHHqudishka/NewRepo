#include <iostream>

using namespace std;

int main()
{
    int a, b;
    srand(time(NULL));
    cout << "Введите кол-во вершин";
    cin >> a;

    cout << "Введите кол-во рёбер";
    cin >> b;

    int** matrix = new int* [a];
    for (int i = 0; i < a; i++) {
        matrix[i] = new int[a];
        for (int j = 0; j < a; j++) {

            matrix[i][j] = rand() % 10 - 5;
        }
    }


}