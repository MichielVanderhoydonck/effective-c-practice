#include <stdio.h>
// void swap(int, int);

// Declare the function signature to accept pointer based parameters
void swap(int*, int*);

int main(void) {
    int a=21;
    int b=17;

    // swap(a, b);
    swap(&a, &b);// address-of operator
    printf("main: a =%d, b=%d\n", a, b);
    return 0;
}

// This version does a swap by value, scoped to the block only, exiting the function restores initial state
// void swap(int a, int b) {
//     int t=a;
//     a=b;
//     b=t;
//     printf("swap: a=%d, b=%d\n", a, b);
// }

// This version passes by reference, using pointers, mutating the 
void swap(int *pa, int *pb) {
    int t=*pa; // dereference the pointer to the object
    *pa=*pb; // dereference pb, read the reference value and store it as new reference value for pa
    *pb=t;
    return;
}