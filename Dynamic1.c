#include<stdio.h>
#include<stdlib.h> //for malloc,calloc,realloc

int main(){
    int Arr[5];  //Static memeory allocation
    int size=0;
    int *ptr=NULL;
    
    printf("Enter number of elments:\n");
    scanf("%d",&size);

    ptr=(int*) malloc(size*sizeof(int));

    //use the memory

    free(ptr);

    /*
    void * malloc(int size);
    
    */
    

    return 0;
}