#include<stdio.h>

int main(){
    
    char ch='A';  //1 byte
    int i=11;     // 4byte
    float f=90.89;  // 4byte
    double d=90.768;  // 8byte

    int arr[5];
    double brr[5];
    float crr[5];
    char drr[5];


    printf("%d\n",sizeof(ch));  //lu instead of d if warning is coming in cmd
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));
 
    printf("%d\n",sizeof(arr));  
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(drr));
 

     printf("%d\n",sizeof(arr[0])); 
    return 0;
}