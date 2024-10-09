#include<stdio.h>

int Maximum(int Num1,int Num2){

   if(Num1>Num2){
      return Num1;
   }
   else{
      return Num2;
   }
}   
int main(){
   int Num1;
   int Num2;
   int Ret=0;
   
   printf("enter first:");
   scanf("%d",&Num1);

    printf("enter second:");
   scanf("%d",&Num2);

   Ret= Maximum(Num1,Num2);
   printf("Maximum NO:%d",Ret);

   return 0;
}

