// Transpose of an array 

#include<stdio.h>
int main(){
    int n;
    printf(" Enter the row  of the array ");
    scanf("%d",&n);
     printf(" Enter the column of the array ");
    int m;
     scanf("%d",&m);
    int arr[n][m];
    
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
        printf("Enter the value of %d %d element ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    }
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
    }
    int arrt[m][n];
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
        arrt[j][i]=arr[i][j];
    }
    }
    printf("\n");
       for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
        printf("%d  ",arrt[i][j]);
    }
    printf("\n");
    }
    
   
    
}












































