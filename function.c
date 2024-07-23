#include <stdio.h>
//void sum(int a,int b);
//float area(float length,float width);
//float area(float length,float width){
    //float area=length*width;
    //printf("The area of the rectangle is %f",area);
//    return length*width;}
float sum(float num1,float num2);
/*void sum(int a,int b){
    int c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);
}*/
void function() {
  static int count = 0; // Initialized only once
  count++;
  printf("Count is %d\n", count);
}

int main(){
    function();
    //sum(2,5);
    /*float length,width;
    printf("Enter the value of length");
    scanf("%f",&length);
    printf("Enter the value of width");
    scanf("%f",&width);
    printf("The area of the rectangle is %f", area(length,width));*/
    float num1,num2;
    printf("Enter the value of first number");
    scanf("%f",&num1);
    printf("Enter the value of second number");
    scanf("%f",&num2);
    printf("The sum of the values are %f", sum(num1,num2));
    return 0;
}
float sum(float num1,float num2){
    return num1+num2;
}

/*void area(float length,float width){
    float area=length*width;
    printf("The area of the rectangle is %f",area);}

float area(float length,float width){
    float area=length*width;
    //printf("The area of the rectangle is %f",area);
    return length*width;
}*/