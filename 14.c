#include<stdio.h>
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
    // printing the actual array
    for(i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
    printf("\n");
    printf("Enter the index of element to be deleted \n");
    int index;
    scanf("%d",&index);
    int arrd[n-1];
    int i2=0;
    for(i=0;i<n;i++){
        if(i == index){
            continue;
            
        }

        arrd[i2]=arr[i];
        i2++;
       
    }
   
// printing the l array after deletion
    for(i=0;i<n-1;i++){
	printf("%d ",arrd[i]);
	}
    printf("\n");

    return 0;
    }