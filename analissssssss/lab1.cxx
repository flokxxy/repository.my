#include <iostream>
#include <fstream>
using namespace std;


int main() {

    ofstream file("lab1.txt");
    for (int n = 2; n <= 30; n += 2) {

        int k=0;

        //cout<<"введите матрицу";
        int **a = new int*[n];
        for (int i = 0; i < n; i++) {
            a[i] = new int[n];
            for (int j = 0; j < n; j++)
                a[i][j] = rand() % 50;
        }

        //cout<<"введите вектор";
        int *b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = rand() % 50;
        }

        int *c = new int[n];
        for (int i = 0; i < n; i++) {
            c[i] = 0;
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                c[i] += a[i][j] * b[i];
                k += 3;
            }
        }

        //for (int i = 0; i < n; i++) 
            //cout << c[i] << " ";
        file <<"n=" << n << ' ' << k << endl;
        

    }
    file.close();
    
    return 0;
}
