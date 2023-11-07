#include <stdio.h>

int main() {
    int n;   
   printf("Enter the order of the matrix : ");
   scanf("%d",&n);   
   int matrix[n][n];
   int i,j;   
   printf("Enter the elements of the matrix : \n");
     for(i=0;i<n;i++){
       for(j=0;j<n;j++){         
         scanf("%d",&matrix[i][j]);
       }
   }
   
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            if(i>j){
         matrix[i][j] = 0;
       }
     }
   }
   printf("\n");
   printf("The lower triangular matrix is : \n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           printf("%d ",matrix[i][j]);
       }
       printf("\n");
   }
    return 0;
}