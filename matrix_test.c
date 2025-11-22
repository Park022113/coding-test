#define N 10000

#include <stdio.h>



int matrix[N][N];



void column_wise_sum() {

    int sum = 0;

    for (int col = 0; col < N; col++) {

        for (int row = 0; row < N; row++) {

            sum += matrix[row][col]; 

        }

    }

    printf("Sum: %d\\n", sum);

}



void main(){

    column_wise_sum();



}