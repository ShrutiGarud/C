#include<stdio.h>

int main(){
    int i;

    printf("Enter Number: \n");
    scanf("%d",&i);
    
    // if(Num%2==0){
    //     printf("Even Number\n");
    // }
    // else{
    //     printf("Odd Number\n");
    // }
    
   for(i=1;i<=50;i++){
    if(i%2==0){
        printf("Even Number\n"); 
    }
    else{
        printf("odd number\n");
    }
   }

    return 0;
}