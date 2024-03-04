#include <iostream>

using namespace std;
void vivod(){

}
int main()
{
    setlocale(LC_ALL,"ru");
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
            matrix[i][j] = -1;
            if (i == j) {
                matrix[i][j] = 0;
            }
           
        }
    }

          for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



}