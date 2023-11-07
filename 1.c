#include<stdio.h>
    int main(){
	int n,i;
	printf("Enter the Size of the array : ");
	scanf("%d",&n);
	int arr[n],arr_rev[n];
    // taking input from user 
	for(i=0;i<n;i++) {	
	printf("Enter the  value of %d element : ",i+1);
	scanf("%d",&arr[i]);
	}
    // printing the actual array
    for(i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
    printf("\n");
    // reversing the array and store its value in another array    
	for(i=0;i<n;i++){	
	arr_rev[i] = arr[n-1-i];
	}
	printf("The reversed  array is  : \n");	
	for(i=0;i<n;i++){	
	printf("%d ",arr_rev[i]);
	}
	return 0;
}