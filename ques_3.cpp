
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int n = size + 1; 
    
 
    int totalSum = n * (n + 1) / 2;
    
  
    int arrSum = 0;
    for (int i = 0; i < size; i++) {
        arrSum += arr[i];
    }
    

    return totalSum - arrSum;
}

int main() {
    // Sorted array from 1 to 7 with 5 missing
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = 7;
    
    int missing = findMissingNumber(arr, size);
    
    cout << "Missing number is: " << missing << endl;
    
    return 0;
}


