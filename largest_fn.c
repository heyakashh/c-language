#include <stdio.h>
 void largest(int a,int b,int c){
    if(a>b && a>c)
        printf("The largest number is %d",a);
    else if(b>a&&b>c)
        printf("The largest number is %d",b);
    else    
        printf("The largest number is %d",c);
 }
 int main(){
    int a,b,c;
    printf("Enter the three values");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    largest(a,b,c);
 }