#include<stdio.h>
#include<string.h>


struct Employee
{
    int id;
    char name[20];
    float salary;
};


int main()
{

    struct Employee e1, e2, e3;
    e1.id = 12;
    strcpy(e1.name , "Asmita");
    e1.salary = 25000;

    printf("Employee details: \n Employee Id: %d \n Employee name: %s \n Employee salary: Rs. %.2f\n\n", e1.id, e1.name, e1.salary);

    e2.id = 14;
    strcpy(e2.name, "Saksham");
    e2.salary = 23000;

    printf("Employee details: \n Employee Id: %d \n Employee name: %s \n Employee salary: Rs. %.2f\n\n", e2.id, e2.name, e2.salary);
   
   
    e3.id = 16;
    strcpy(e3.name, "siddharth");
    e3.salary = 11000;

    printf("Employee details: \n Employee Id: %d \n Employee name: %s \n Employee salary: Rs. %.2f\n\n", e3.id, e3.name, e3.salary);


    return 0;
}
