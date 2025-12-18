// Exercise:
// Write a short program that demonstrates how a variable declared in an inner block scope can temporarily hide (or shadow)
// a variable with the same name declared in an outer block scope.
# include <stdio.h>

int main(void) {
 int i = 0; 
 printf("%d\n", i);
 // we shadow i in the inner block, once we exit the value returns to the initial one
 {
    int i = 42;
    printf("%d\n", i);
 }
 printf("%d\n", i);
 return 0;
}

