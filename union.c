#include <stdio.h>
union UJob{
    char name[32];
    float salary;
    int no;
}uJob;

struct SJob{
    char name[32];
    float salary;
    int no;
}sJob;

int main(){
    printf("union %d bytes\n",sizeof(uJob));
    printf("structure %d bytes",sizeof(sJob));
    return 0;

}