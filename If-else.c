#include<stdio.h>

int main(){
    int Standard=  0;

    printf("Entry your standard:\n");
    scanf("%d",&Standard);

    if(Standard ==1){
        printf("your exam is at 7 am\n");

    }
    else if(Standard ==2){
        printf("Your Exam  is at 8am\n");
    }
    else if(Standard == 3){
        printf("Your exam is at 9am\n");
    }
    else if(Standard==4){
        printf("your exam at 10am\n");
    }
    else{
        printf("Wrong standard\n");
    }


    return 0;
}