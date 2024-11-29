//character arrays and pointers

#include <stdio.h>
#include <string.h>

void print(char* C){
    
   
    while(*C != '\0'){
        printf("%c", *C);
        C++;
    }
    printf("\n");
}
int main(){

    // 1) Store strings
    
    /*
    char C[] = "JOHN";
    printf("Size of bytes = %d\n", sizeof(C));
    int len = strlen(C);
    printf("Length = %d\n", len);

    */

   // 2) Arrays are always passed by reference

   //char C[20] = "Hello"; // string gets stored in the space for array
   char *C = "Hello"; // string gets stored as compile time constant
   print(C);


}
