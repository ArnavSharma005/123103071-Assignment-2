#include <stdio.h>
int main()
{
 int m;
      printf("Enter the order of the matrix  : \n");
     scanf("%d",&m);
  int   matrix[m][m];
     int i,j;
     for(i=0;i<m;i++){
      for(j=0;j<m;j++){
     
   printf("Enter the%d %d  elements : \n",i+1,j+1);
     scanf("%d",&matrix[i][j]);
 }
  }
  int sumr;
 for(i=0;i<m;i++){
  sumr=0;
 for(j=0;j<m;j++){
   printf("%d  ",matrix[i][j]);
   sumr+=matrix[i][j];
 }
    printf("%d \n",sumr);
  }
  int sumc;
 for(i=0;i<m;i++){
  sumc=0;
 for(j=0;j<m;j++){
   sumc+=matrix[j][i];
 }
    printf("%d ",sumc);
  }

return 0;
}