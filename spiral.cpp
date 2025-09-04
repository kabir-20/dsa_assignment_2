#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int matrix[50][50]; 
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    cout << "Spiral order: ";

    while (top <= bottom && left <= right) {
       
        for (int j = left; j <= right; j++)
            cout << matrix[top][j] << " ";
        top++;

       
        for (int i = top; i <= bottom; i++)
           { cout << matrix[i][right] << " ";}
        right--;

        
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                {cout << matrix[bottom][j] << " ";}
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                {cout << matrix[i][left] << " ";}
            left++;
        }
    }

    return 0;
}
