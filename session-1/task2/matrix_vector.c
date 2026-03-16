
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];
    int j,k;

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    // initialise matrix a to 1
    for(k=0; k<4; k++){
        for(j=0; j<4; j++){
            a[k][j] = 1;
        }
    }

    // initialise vector b to 1
    for(j=0; j<4; j++){
        b[j] = 1;
    }

    // matrix-vector product
    for(k=0; k<4; k++){
        c[k] = 0;
        for(j=0; j<4; j++){
            c[k] += a[k][j] * b[j];
        }
    }

    // print result
    for(k=0; k<4; k++){
        printf("c[%d] = %f\n", k, c[k]);
    }

    return 0;
}