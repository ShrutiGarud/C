#include<stdio.h>

#pragma pack(1)
struct Student{
    int RollNo;
    char Division;
    int Age;
    float marks;
    int Salary;
    
};

int main(){
    struct Student Amit;
    
    
    printf("Size of object is:%d\n",sizeof(Amit));

    Amit.RollNo=11;
    Amit.Division='A';
    Amit.marks=90.89;
    Amit.Age=19;
    Amit.Salary=21000;

   
    return 0;
}