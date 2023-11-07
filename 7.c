#include<stdio.h>
#include<stdbool.h>

    int main(){
        int i,z=0,choice,sec_choice;
        int check=0;
 
	int arr[10];
        for(i=0;i<10;i++){
        arr[i]=0;
    }
    while(z!=1){
        check=0;
    printf(" Press 1 for First class Press 2 for economy\n");        
	scanf("%d",&choice);
    if(choice==1){
        for(i=0;i<5;i++){
            if(arr[i]==0){
                check=1;
                arr[i]=1;
            printf(" Your seat is assigned and your seat number is %d\n",i+1);
            break;
            }
        }
        
        if(check==0){
            printf("All Seats in first class are booked.Do you want a ticket for economy class?(Press 1 for yes and 2 for no)\n ");
            scanf("%d",&sec_choice);
            if(sec_choice==1){
            for(i=5;i<10;i++){
            if(arr[i]==0){
                check=1;
                arr[i]=1;
            printf(" Your seat is assigned and your seat number is %d\n",i+1);
            break;
            }
                            }
            }
            else{
                printf("Next flight leaves in 3 hours\n");
                z=1;
            }
        }
    }
    else{
         for(i=5;i<10;i++){
            if(arr[i]==0){
                check=1;
                arr[i]=1;
            printf(" Your seat is assigned and your seat number is %d \n",i+1);
            break;
            }
        }
        if(check==0){
            printf("All Seats in economy class are booked.Do you want a ticket for first class ?(Press 1 for yes and 2 for no)\n ");
            scanf("%d",&sec_choice);
            if(sec_choice==1){
            for(i=0;i<5;i++){
            if(arr[i]==0){
                check=1;
                arr[i]=1;
            printf(" Your seat is assigned and your seat number is %d\n",i+1);
            break;
            }
        }
            }
            else{
                printf("Next flight leaves in 3 hours\n");
                z=1;

            }
        }

    }
    }
    return 0;
    }