//Code to calculate determinant 
#include<stdio.h>
int determinant2(int arr[2][2]){
 int beginningr=0,beginningc=0;
    int det=arr[beginningr][beginningc]*arr[beginningr+1][beginningc+1]-arr[beginningr][beginningc+1]*arr[beginningr+1][beginningc];
return det;
}
int main(){
    int matrix[3][3];
           printf("Enter the elements of the  matrix : \n");
    int i,j;
    int det[2][2];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    int i2=0,j2=0;
    int a=0;
    int sum=0;
    while(a<3){
    
          if(i2>=2){
            i2=0;
        }  

        for( i=0;i<3;i++){
        for(j=0;j<3;j++){
        if(j !=a && i!=0){
            det[i2][j2]=matrix[i][j];
             j2++; 
             if(j2==2){
                i2++;
                j2=0;
             }     
        }
        }
        if(i2==2){
       if(a%2==0){
    sum+=matrix[0][a]*determinant2(det);     
        }
        else{
            sum-=matrix[0][a]*determinant2(det); 
        }
        }
               }
        a++;
    }
    printf("The determinant of the matrix is %d",sum);
    
}