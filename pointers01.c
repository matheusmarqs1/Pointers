#include <stdio.h>

int main(){


    // Type pointers
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of char is %d bytes\n ", sizeof(char));
    printf("Adress = %d, value = %d \n", p0, *p0);

    //1025 = 00000000  00000000  00000100  00000001

    printf("----------------------------------------\n");
    // Pointer arithmetic
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p+1, *(p+1));
    printf("Adress = %d, value = %d \n", p0, *p0);
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));

    //Void pointer - Generic pointer

    void *p1;
    p1 = p;
    printf("Address = %d\n", p1);
    

}