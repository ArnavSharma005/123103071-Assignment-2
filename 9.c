#include <stdio.h>
int main(){
    int m,n;
printf("Enter the number of rows : ");
 scanf("%d",&m);
 printf("Enter the number of  columns : ");
 scanf("%d",&n);
  int matrix1[m][n],matrix2[m][n];
 // TAking input of first matrix 
  printf("Enter the elements of the matrix 1 : \n");
  int i,j;
 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
 printf("Enter the value of  %d %d element\n",i+1,j+1);
 scanf("%d",&matrix1[i][j]);
 }
 } 
 printf("\n");
 // Taking input of second matrix 
 printf("Enter the elements of the matrix 2 : \n");
 for(i=0;i<m;i++){
 for(j=0;j<n;j++){
 printf("Enter the value of  %d %d element\n",i+1,j+1);
 scanf("%d",&matrix2[i][j]);
}
}
printf("\n");
// printing the first matrix 
for(i=0;i<m;i++){
for(j=0;j<n;j++){
 printf("%d\t",matrix1[i][j]);
 }
 printf("\n");
 }
 printf("\n");
 // printing the second matrix 
 for(i=0;i<m;i++){
for(j=0;j<n;j++){
 printf("%d\t",matrix2[i][j]);
 }
 printf("\n");
 }
printf("The sum of the 2 matrix is : \n");

for(i=0;i<m;i++){
for(j=0;j<n;j++){
 matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
 
 printf("%d\t",matrix1[i][j]);
 }
 printf("\n");
 }
 return 0;
}