
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];
    int k,j;
    int b[4][4];
    int x,y;

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
   for( k=0; k<4; k++){
      for(j=0; j<4; j++){
         a[k][j] = 2*k-j;
         printf("%d : ", a[k][j]);
      }
      printf("\n");
   }
printf("\n\n");

//transpose

   for( x=0; x<4; x++){
      for(y=0; y<4; y++){
         b[x][y] = a[y][x];
         printf("%d : ", b[x][y]);
      }
      printf("\n");
   }
 

    return 0;
 }
