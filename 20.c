#include<stdio.h>
int main(){

    int m,n,a,b;
    printf("Enter the rows of 1st matrix : \n");
    scanf("%d",&m);
    printf("Enter the columns of 1st matrix : \n");
    scanf("%d",&n);
    int matrix_1[m][n];
    printf("Enter the rows of 2nd matrix : \n");
    scanf("%d",&a);
    printf("Enter the columns of 2nd matrix : \n");
    scanf("%d",&b);
    if(m==a && n==b){

        printf("The matrices are comparable\n");

   }
   else{
    printf("The matrices are not  comparable \n");
    return 1;
   }
       printf("Enter the elements of the 1st matrix : \n");
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            scanf("%d",&matrix_1[i][j]);
        }
    }
    printf("\n");
    int matrix_2[a][b];
    printf("Enter the elements of the 2nd matrix : \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){

            scanf("%d",& matrix_2[i][j]);
        }
    }
    printf("\n");

          for(i=0;i<m;i++){
          for(j=0;j<n;j++){
            if(matrix_1[i][j] != matrix_2[i][j]){
                printf(" The matrix are not equal \n");
                return 0;
            }
        }
          }
    printf(" The two matrix are equal");    
    return 0;
}