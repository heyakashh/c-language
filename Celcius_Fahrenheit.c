#include <stdio.h>
int celcius_fahrenheit(int celcius){
    return((celcius*9/5)+32);

}
int main(){
    printf("Give the value of celcius is");
    int celcius;
    scanf("%d",&celcius);
    printf("The converted value is %d",celcius_fahrenheit(celcius));


    return 0;
}