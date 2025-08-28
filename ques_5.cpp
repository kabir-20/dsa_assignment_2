//// diagonal elements
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[10][10];  // assuming max size 10x10 for simplicity
    int diagonal[10];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

   
    for (int i = 0; i < n; i++)
	{
    	 for (int j = 0; j < n; j++)
		{
           if(i==j)
           {
           	 diagonal[i] = matrix[i][i];
		   }
        }
    }

    
    cout << "Diagonal elements are: ";
    for (int i = 0; i < n; i++) {
        cout << diagonal[i] << " ";
    }
    cout << endl;

    return 0;
}


// for rest of parts
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[10][10];
    int temp[10];
    int k=0;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
	{
    	 for (int j = 0; j < n; j++)
		{
           if(matrix[i][j]!=0)
           {
           	 temp[k] = matrix[i][j];
           	 k++;
		   }
        }
    }
    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}


