#include <stdio.h>
int main(){
    int m,n;
printf("Enter the number of rows : ");
 scanf("%d",&m);
 printf("Enter the number of  columns : ");
 scanf("%d",&n);
  int matrix[m][n];
 // Taking input of matrix 
  printf("Enter the elements of the matrix : \n");
  int i,j;
 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
 printf("Enter the value of  %d %d element\n",i+1,j+1);
 scanf("%d",&matrix[i][j]);
 }
 } 
 int count = 0;
 int element = n*m;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){       
       if(matrix[i][j]==1 && i==j)
      count++;
      if(matrix[i][j]==0 && i!=j)
      count++;
        }
    }
    if(count == element)
    {
        printf("It is an identity matrix.");
    }
    else
    printf("It is not an identity matrix.");
  return 0;
}