#include<stdio.h>
    int main(){
	int n,i,j;
	printf("Enter the Size of the array : ");
	scanf("%d",&n);
	int arr[n];
    // taking input from user 
	for(i=0;i<n;i++) {	
	printf("Enter the  value of %d element : ",i+1);
	scanf("%d",&arr[i]);
	}
    // printing the desired output
	printf("Element\t\tValue\t\tHistogram");
	printf("\n");
    for(i=0;i<n;i++){
		printf("%d\t\t%d\t\t",i,arr[i]);
		for(j=1;j<=arr[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	}