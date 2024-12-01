#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    
    // Malloc usage example
    int *A = (int*)malloc(n*sizeof(int)); // dynamically allocated array
    
    for(int i= 0; i<n; i++){
        A[i] = i+1;
    }
    /*
    free(A);
    A = NULL; // After free, adjust pointer to NULL

    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    */

    // Calloc usage example
    /*
    int *B = (int*)calloc(n,sizeof(int)); // dynamically allocated array
    
    for(int i= 0; i<n; i++){
        B[i] = i+1;
    }
    
    for(int i = 0; i<n; i++){
        printf("%d ", B[i]);
    }
   */

    // Realloc usage example
    int *C = (int*)realloc(A, 2*n*sizeof(int));
    //int *A = (int*)realloc(A, 0); equivalent to free(A)
    //int *C = (int*)realloc(NULL, n*sizeof(int)); // equivalent to malloc
    printf("Previous block address = %d, new address = %d\n", A, C);
    for(int i = 0; i<2*n; i++){
        printf("%d \n", C[i]);
    }
}