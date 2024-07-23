#include <stdio.h>
#include <string.h>
union Data{
    int i;
    float f;
    char str[30];
}data;
int main(){
    data.i=10;
    data.f=10.5;
    strcpy(data.str,"akash");
    printf("i: %d\n",data.i);
    printf("f: %.1f\n",data.f);
    printf("str: %s",data.str);

    return 0;
}