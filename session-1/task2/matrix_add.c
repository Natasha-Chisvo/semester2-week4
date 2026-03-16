
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];
    int k;
    int j;

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
  // initialise matrices a and b to 1
    for(k = 0; k < 4; k++){
        for(j = 0; j < 4; j++){
            a[k][j] = 1;
            b[k][j] = 1;
        }
    }

    // compute matrix sum
    for(k = 0; k < 4; k++){
        for(j = 0; j < 4; j++){
            c[k][j] = a[k][j] + b[k][j];
        }
    }

    // print result
    for(k = 0; k < 4; k++){
        for(j = 0; j < 4; j++){
            printf("%f : ", c[k][j]);
        }
        printf("\n");
    }

    return 0;
 }
