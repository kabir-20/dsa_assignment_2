#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int a[50][50];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

  int ab=-1;

    for (int i = 0; i < m; i++) {
       
        int minVal = a[i][0];
        int col = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                col = j;
            }
        }
        int ab=1;
        for (int k = 0; k < m; k++) {
            if (a[k][col] > minVal) {
                ab=-1;
                break;
            }
        }

        if (ab==1) {
            cout << "Saddle point is " << minVal << " at position (" << i << "," << col << ")\n";
        }
    

    if (ab==-1)
        cout << "No saddle point found.\n";
    }
    return 0;
}
