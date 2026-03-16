
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
    int i;

    // needs base case//
    f[0] = 1;

    
    for(i = 1; i < 20; i++) {
        f[i] = i * f[i-1];
    }

    for(i = 0; i < 20; i++) {
        printf("%d! = %d\n", i, f[i]);
    }

    return 0;
 }
