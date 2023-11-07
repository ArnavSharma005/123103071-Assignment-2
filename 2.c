#include<stdio.h>
    int main(){
    // Initializing an aray of 10 elements    
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
    // adding all the values and printing the sum
	int i;
	int sum = 0;
	for(i=0;i<10;i++){
	    sum+=A[i];
	}
    printf("The sum of  all elements in this array is %d",sum);
    printf("\n");
    // Multiplying all the values by 3
    for(i=0;i<10;i++){
        A[i]*=3;
    }
    // printing the arary after multiplication

     for(i=0;i<10;i++){
     printf("%d ",A[i]);
     }
    printf("\n");
    // Printing the table from 1  to 10 in tabular form 
    int j,num1[10],num2[10];
      for(i=0;i<10;i++){
        num1[i]=i+1;
    
    for(j=0;j<10;j++){
        num2[j]=j+1;
    
    printf("%dx%d=%d\t",num2[j],num1[i],num1[i]*num2[j]);
    }
    printf("\n");
    }

	return 0;
}