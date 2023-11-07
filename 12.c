# include<stdio.h>
int frequency(int arr[],int count[],int uni[],int size){
int i,j,k,z;
for(i=0;i<=size-1;i++){
z=0;
count[i]=0;
for(j=0;j<=size-1;j++){
if(arr[i]==arr[j]){
count[i]++;
}
}
for(k=0;k<i;k++){
if(arr[i]==arr[k]){
z=1;
}
}
if(z!=1){
printf("The frequency of %d is %d \n",arr[i],count[i]);
}
}

}
int main() {
int size;
printf("Enter the size of array");
scanf("%d",&size);
int arr[size];
int count[size];
int uni[size];

int i;
for(i=0;i<=size-1;i++){
printf("Enter the value of %d element :",i+1);
scanf("%d",&arr[i]);
}
printf("[ ");
for(i=0;i<=size-1;i++){
printf(" %d ",arr[i]);
}
printf(" ] \n");
frequency(arr,count,uni,size);
return 0;
}