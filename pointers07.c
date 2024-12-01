// Pointers and multi-dimensional arrays
#include <stdio.h>


//Argument: 3-D array of integers

void Func(int (*A)[2][2]){   
} 



int main(){

    int C[3][2][2] = {{{2,5},{7,9}},
                      {{3,4},{6,1}},
                      {{0,8}, {11,13}}}; // C returns int(*)[2][2]
    
    printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", *(C[0][0] +1));

    int A[2] = {1,2};// A returns int* 

    int B[2][3] = {{2,4,6}, {5,7,8}}; // B returns int (*) [3]
    Func(C); 
}