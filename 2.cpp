#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    int a;
    int b;
    cout<<"Введите количество строк"<<endl;
    cin>>a;
    cout<<"Введите количество столбцов"<<endl;
    cin>>b;
    const int n = a;
    const int m = b;
    vector<vector<int> >matrix(n, vector<int>(m));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand()%41-20;
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
    return 0;

}