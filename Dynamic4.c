#include<stdio.h>
#include<stdlib.h> //for malloc,calloc,realloc

int main(){
   
    int *ptr=NULL;
    
    ptr=(int*)realloc(NULL,5*sizeof(int));  //malloc behave like

    
    ptr=(int*)realloc(ptr,0);   //freee

    free(ptr);

    return 0;
}