#include <stdio.h>
void even_odd(int num);
int main(){
    printf("enter a number");
    int num;
    scanf("%d",&num);
    even_odd(num);
    return 0;
}
void even_odd(int num){
    if(num%2==0)
        printf("Even number");
    else
        printf("Odd number");
}