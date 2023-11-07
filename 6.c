#include<stdio.h>
    int main(){
	int i,j,value;
	int arr[20];
    // Taking input from user
	for(i=0;i<20;i++) {	
	printf("Enter the  value of %d element : ",i+1);
	scanf("%d",&value);
    if(value>=10 && value<=100){
        arr[i]=value;
    }
    else{
    printf(" The given number is out of range.Program exited");
    break;
    }
     int count=0; 
      for(int j=0;j<19;j++){
         if(arr[i]==arr[j]){
         count++;
         }
      }  
      if(count == 1){
     printf("%d\n",arr[i]);
      }
    
        
	}
 
    return 0;
    }