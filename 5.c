#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
     for(int i = 0;i<n;i++) {
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
     int count=0; 
      for(int j=0;j<n;j++){
         if(arr[i]==arr[j]){
         count++;
         }
      }  
      if(count == 1){
     printf(" The unique element in this array is %d \n",arr[i]);
      }
    
        
    }
    
    return 0;
}