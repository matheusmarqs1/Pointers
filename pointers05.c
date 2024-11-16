#include <stdio.h>

// Arrays as function arguments //

/*01) Size inside the SumOfElements - ERROR!!!! 
   
   For arrays there is no call by value, there is always a call by reference

int SumOfElements(int A[]){
        int i, sum = 0;
        int size = sizeof(A) / sizeof(A[0]);
        printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
        for(i = 0; i < size; i++){
            sum += A[i];
        }
        return sum;
   }

int main(){

   int A[] = {1,2,3,4,5};
   
   int total = SumOfElements(A);
   printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
   printf("Sum of elements = %d\n", total);
}
*/

//02) Size inside main 
int SumOfElements(int* A, int size){ // "int* A" or "int A[]" ..it's the same..
        int i, sum = 0;
        printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
        for(i = 0; i < size; i++){
            sum += A[i]; // A[i] is *(A+i)
        }
        return sum;
   }

int main(){

   int A[] = {1,2,3,4,5};
   int size = sizeof(A) / sizeof(A[0]);
   int total = SumOfElements(A, size); // A can be used for &A[0]
   printf("Sum of elements = %d\n", total);
   printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
}