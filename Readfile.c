#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    char name[30];
    int fd=0;
    int iRet=0;
    char Data[30]= {'\0'};

    printf("Enter name of file that you want to open:\n");
    scanf("%s",name);

    fd=open(name,O_RDWR);
   
    iRet=read(fd,Data,10);

    printf("%d bytes gets successfully written into the file\n",iRet); 

    printf("%s\n",Data);
    close(fd);

    return 0;
}