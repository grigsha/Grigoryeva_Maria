//first commit
#include <iostream>
#include <random>
using namespace std;

int main() {
    int n;
    int m;
    cout<<"Введите количество строк"<<endl;
    cin>>n;
    cout<<"Введите количество столбцов"<<endl;
    cin>>m;
    int **matrix = new int* [n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        matrix[i] = new int [m];
    }
    for (int i_row = 0; i_row < n; i_row++) {
        for (int j_column = 0; j_column < m; j_column++) {
            matrix[i_row][j_column] = rand()%41-20;
        }
    }
    for (int i = 0; i < n; i++){
        int ans = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < 0) {
                ans++;
            }
            cout<<matrix[i][j]<<endl;
        }
        cout<<"Количество отрицательных чисел в строке:"<<ans<<endl; 
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
