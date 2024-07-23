#include <stdio.h>
union Employee{
    int id;
    char name[30];
    float salary;
    int age;
};
int main(){
    union Employee emp;

    printf("Enter employee id \n");
    scanf("%d",&emp->id);
    printf("Enter employee name \n");
    scanf("%d",&emp->name);
    printf("Enter employee salry \n");
    scanf("%d",&emp->salary);
    printf("Enter employee age \n");
    scanf("%d",&emp->age);


}