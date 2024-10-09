#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//SEEK_SET Beginning of file
//SEEK_CUR current position 
//SEEK_END  end of file
int main(){
    char name[30];
    int fd=0;
    int iRet=0;
    char  Data[30]= {'\0'};

    printf("Enter name of file that you want to open:\n");
    scanf("%s",name);

    fd=open(name,O_RDWR);
    lseek(fd,10,SEEK_SET);
    iRet=read(fd,Data,10);

    printf("%d bytes gets successfully written into the file\n",iRet); 

    printf("%s\n",Data);
    close(fd);

    return 0;
}