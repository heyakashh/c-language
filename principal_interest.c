#include <stdio.h>
float interest(float pri,float rate,float time){
    float intrest1=(pri*rate*time)/100;
    return intrest1;
}
int main(){
    printf("enter details about \n principal ");
    float pri,rate,time;
    scanf(" %f",&pri);
    printf("rate ");
    scanf(" %f",&rate);
    printf("time ");
    scanf(" %f",&time);
    float interest1=interest(pri,rate,time);
    printf("The interest is %.2f \nThe sip is %.2f",interest1,(interest1+pri));
    return 0;
}