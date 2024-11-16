#include <stdio.h>


// Example of call by value
/*void Increment(int a){
    a = a + 1;
    printf("Address of variable a in increment = %d\n", &a);
}

int main(){

    int a = 10;
    Increment(a);
    printf("a = %d", a);
    printf("Address of variable a in main = %d\n", &a);
}

*/

//Example of call by reference

void Increment(int *p){
    *p = (*p) + 1;

}
int main(){
    
    int a = 10;
    Increment(&a);
    printf("a = %d", a);
}