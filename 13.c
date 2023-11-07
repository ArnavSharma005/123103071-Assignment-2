#include<stdio.h>

void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sort(int arr[],int n){
    int i,j;
     for(i=1;i<n;i++){
       
        int j;
       for(j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
             swap(arr,j,j+1);
        }
      
       }
    }
}
    int main(){
	int n,i;
	printf("Enter the Size of the array : ");
	scanf("%d",&n);
	int arr[n];
    // taking input from user 
	for(i=0;i<n;i++) {	
	printf("Enter the  value of %d element : ",i+1);
	scanf("%d",&arr[i]);
	}
    printf("The sorted array before insertion is: \n ");
    sort(arr,n);
    // printing the sorted  array
    for(i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
    printf("\n");
    
    printf("Enter the value of the  element to be inserted\n ");
    int new_element;
    scanf("%d",&new_element);
    int arri[n+1];
    arri[n]=new_element;
    for(i=0;i<n;i++){
        arri[i]=arr[i];
    }
    printf("The sorted array after insertion is: \n ");
    sort(arri,n+1);
     // printing the sorted  array 
    for(i=0;i<n+1;i++){
	printf("%d ",arri[i]);
	}
    printf("\n");
    
    return 0;
    }