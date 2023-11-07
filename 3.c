#include<stdio.h>
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
    int main(){	
	int arr[10];
    int i;
	// taking an user inputed array
	for(i=0;i<10;i++) {	
	printf("Enter the  value of %d element : ",i+1);
	scanf("%d",&arr[i]);
	}
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
	for(i=0;i<5;i++){
	    swap(arr,i,9-i);
	}
    
    printf("The reversed order is : ");
    
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

	return 0;
}