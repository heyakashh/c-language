#include <stdio.h>
#include <string.h>
struct Employee{
        int id_no;
        char name[50];
        float salary;
    }emp1,emp2,emp3;
int main(){
    char e1[50];
    char e2[50];
    char e3[50];
    
    printf("Enter the name of the first employee ");
    scanf("%s\n",&e1);
    printf("Enter the name of the second employee ");
    scanf("%s\n",&e2);
    printf("Enter the name of the third employee ");
    scanf("%s\n",&e3);

    strcpy(emp1.name,e1);
    strcpy(emp2.name,e2);
    strcpy(emp3.name,e3);

    printf("Enter the id of the first employee ");
    scanf("%d\n",&emp1.id_no);
    printf("Enter the id of the second employee ");
    scanf("%d\n",&emp2.id_no);
    printf("Enter the id of the third employee ");
    scanf("%d\n",&emp3.id_no);

    printf("Enter the salary of the first employee ");
    scanf("%d\n",&emp1.salary);
    printf("Enter the salary of the second employee ");
    scanf("%d\n",&emp2.salary);
    printf("Enter the salary of the third employee ");
    scanf("%d\n",&emp3.salary);
    
    
    printf("Name of Employee 1: %s\n",emp1.name);
    printf("Id of Employee 1: %d\n",emp1.id_no);
    printf("Salary of Employee 1: %.2f\n",emp1.salary);

    printf("Name of Employee 2: %s\n",emp2.name);
    printf("Id of Employee 2: %d\n",emp2.id_no);
    printf("Salary of Employee 2: %.2f\n",emp2.salary);

    printf("Name of Employee 3: %s\n",emp3.name);
    printf("Id of Employee 3: %d\n",emp3.id_no);
    printf("Salary of Employee 3: %.2f\n",emp3.salary);
    
    
    
    
    return 0;
}