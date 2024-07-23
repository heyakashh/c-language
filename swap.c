#include <stdio.h>
/*int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping \n a: %d \n b: %d",a,b);
}
int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping \n a: %d \n b: %d",*a,*b);
}
void swap(){
    int a=4;
    printf("First number a: %d\n",a);
    int b=8;
    printf("Second number b: %d\n",b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping \n a: %d \n b: %d",a,b);

}*/
int sum(){
    int a,b;
    printf("Enter first number a: ");
    scanf("%d",&a);
    printf("Enter second number b: ");
    scanf("%d",&b);
    int sum=a+b;
    //printf("Sum is: %d ",sum);
    return sum;

}
int main(){
    //sum();
    //int a,b;
    //printf("Enter first number a: ");
    //scanf("%d",&a);
    //printf("Enter second number b: ");
    //scanf("%d",&b);
    //swap(&a,&b);
    printf("Sum of two numbers are: %d",sum());
    return 0;
}