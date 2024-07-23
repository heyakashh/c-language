#include <stdio.h>
#define MAX_EMPLOYEES 3
typedef struct Employee{
        int emp_id;
        char name[40];
        int age;
        float salary;
    };

void emp(struct Employee employees[]){
    for(int i=0;i<MAX_EMPLOYEES;i++){
        printf("enter detail %d:\n",i+1);
        employees[i].emp_id=i+1;
        printf("name");
        scanf("%s",employees[i].name);
        
        printf("age");
        scanf("%s",employees[i].age);

        printf("salary");
        scanf("%s",employees[i].salary);
    }
}
int main(){
    
    emp(Employee);
    return 0;

}