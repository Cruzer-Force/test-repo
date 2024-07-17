

#include <stdio.h>

// // void bubblesort(int x[], int n) {
//     int i, j, t;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (x[j] > x[j + 1]) {
//                 t = x[j];
//                 x[j] = x[j + 1];
//                 x[j + 1] = t;
//             }
//         }
//     }
// }

int main() {
    int i, n, x[25];

    printf("Key in the number of elements: ");
    scanf("%d", &n);

    printf("Key in the Elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    bubblesort(x, n);

    printf("Array elements sorted: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}

/*

Sure Lets break the code down:

1. The program includes the standard input/output library stdio.h

2. The bubblesort function is defined, which takes an integer array x and its size n as parameters.

    * It initializes three integer variables: i, j, and t.

    * It uses two nested loops:
      
        - The outer loop iterates from 0 to n-2 (since the last iteration is not needed).

        - The inner loop iterates from 0 to n-i-2 (since the last i elements are already sorted).
    
    * Inside the inner loop, it compares adjacent elements x[j] and x[j+1].

    * If x[j] is greater than x[j+1], it swaps the elements using a temporary variable t.

    *This process continues until the array is sorted in ascending order. 


3.  The main function is defined, which is the entry point of the program.
 
    * It initializes three integer variables: i, n, and an array x of size 25.

    * It prompts the user to enter the number of elements and stores it in n.

    * It then prompts the user to enter the elements of the array and stores them in x.


4. The bubblesort function is called with the array x and its size n as arguments.

5. After sorting, it prints the message "Array elements sorted: ".

    * It uses a loop to iterate from 0 to n-1.

    * Inside the loop, it prints each element of the sorted array x followed by a space.

    * Finally, it prints a newline character.


6. The program returns 0 to indicate successful execution.


In summary, this program performs bubble sort on an array of integers entered by the user and prints the sorted array.

*/