#include <iostream>
#include <string.h>  

using namespace std;

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2); 

    cout << "Concatenated string: " << str1 << endl;
    return 0;
}

// reverse a string

#include <iostream>
#include <string.h> 

using namespace std;

int main() {
    char str[] = "Hello World";
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}

//to delete all the vowels from the string


//Sort strings alphabetically
#include <iostream>
#include <string.h>  

using namespace std;

int main() {
    const int n = 5;
    char arr[n][20] = {"banana", "apple", "cherry", "mango", "blueberry"};
    char temp[20];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}



//to convert a character from uppercase to lowercase.
#include <iostream>
#include <string.h>  // not needed here, but added as per request
using namespace std;

int main() {
    char ch = 'A';

   if (ch >= 65 && ch <= 90) {
        ch = ch + 32; 
    }

    cout << "Lowercase character: " << ch << endl;
    return 0;
}




