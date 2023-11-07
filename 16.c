#include <stdio.h>

 int main()
{
 int m,n,i,j;
     printf("Enter the rows : \n");
     scanf("%d",&m);
     printf("Enter the columns : \n");
     scanf("%d",&n);
 int matrix[m][n];
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
     
   printf("Enter the%d %d  elements : \n",i+1,j+1);
     scanf("%d",&matrix[i][j]);
 }
  }
  // printing the matrix 
     for(i=0;i<m;i++){
      for(j=0;j<n;j++){
     
     printf("%d",matrix[i][j]);
 }
 printf("\n");
     }
   int sum = 0;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        if(i==j){
        sum+= matrix[i][j];
    }
  }
}
  printf("\n");
   printf("The sum of right diagonals of a matrix is %d",sum);
   return 0;
}