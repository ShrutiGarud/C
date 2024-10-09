#include<stdio.h>


struct Student{
    int RollNo;
    char Division;
    int Age;
    float marks;
    int Salary;
    
};

int main(){
    struct Student Amit;
    struct Student Pooja;
    
    printf("Size of object is:%d\n",sizeof(Amit));

    Amit.RollNo=11;
    Amit.Division='A';
    Amit.marks=90.89;
    Amit.Age=19;
    Amit.Salary=21000;

    Pooja.RollNo=21;
    Pooja.Division='D';
    Pooja.marks=93.67;
    Pooja.Age=17;
    Pooja.Salary=5000;

    printf("Age of amit is:%d\n",Amit.Age);
    printf("Age of pooja is:%d\n",Pooja.Age);

    printf("Salary of amit is:%d\n",Amit.Salary);
    printf("Salary of Pooja is:%d\n",Pooja.Salary);



    return 0;
}