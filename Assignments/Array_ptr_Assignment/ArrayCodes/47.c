//subtractin of 2 matrix
#include<stdio.h>
void main(){

int r,c,i,j;
printf("enter size of matrix\n");
scanf("%d%d",&r,&c);
int b[r][c],a[r][c],sum[r][c];

printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {

            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {

            scanf("%d", &b[i][j]);
        }


    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] - b[i][j];
        }


    printf("\nDiff of two matrices: \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);

        }printf("\n");
      }
}
