#include <stdio.h>

int main()
{
 int i,j,k;
 int matrix1[3][3],matrix2[3][3],matrix3[3][3];
 // taking input of first matrix
printf("Enter the elements of the matrix 1 : \n");
 for(i=0;i<3;i++){
 for(j=0;j<3;j++){
    printf("Enter the value of  %d %d element\n",i+1,j+1);
 scanf("%d",&matrix1[i][j]);
 }
 }
//taking input of third matrix
 printf("Enter the elements of the matrix 2 :\n ");
 for(i=0;i<3;i++){
for(j=0;j<3;j++){
 printf("Enter the value of  %d %d element\n",i+1,j+1);
 scanf("%d",&matrix2[i][j]);
 }
 }
 printf("\n");
 // printing the first matrix 
for(i=0;i<3;i++){
for(j=0;j<3;j++){
 printf("%d\t",matrix1[i][j]);
 }
 printf("\n");
 }
 printf("\n");
 // printing the second matrix 
 for(i=0;i<3;i++){
for(j=0;j<3;j++){
 printf("%d\t",matrix2[i][j]);
 }
 printf("\n");
 }
 printf("\n");
 printf("The multiplication of 2 matrices is : \n");

 for(i=0;i<3;i++){
 for(j=0;j<3;j++){
 int a = 0; 
for(k=0;k<3;k++){
 
 a+=(matrix1[i][k]*matrix2[k][j]); 
 
 matrix3[i][j]=a;
 printf(" ");
 } 
 printf("%d",matrix3[i][j]);
} 
     printf("\n");
 }
  return 0;
}