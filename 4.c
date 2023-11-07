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
    int count,dup=0;
    for(int i =0;i<n;i++){
      count =0;
      for(int j =0;j<n;j++)
      {
         if(arr[i] == arr[j])
         count++;
      }
        if(count>1)
        dup++;
    }
    if(dup>0){
    printf("Total no. of duplicate elements is : %d ",dup/2);
    }
    else{
    printf("No duplicate element");
    }
    return 0;
}