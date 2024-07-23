#include "stdio.h"
#include "string.h"
int main(){
    char name[20]="akash kumar ";
    char n2[50]="Hello";
    char n3[50]="World";
    char n4[50]="Hello, World";
    char n5[100]="Hello";
    //printf("Length of my name is :%d \n",strlen(name));
    //printf("Length of the string is :%zu \n",strlen(n4));
    //printf("After copying :%s ",strcpy(n5,n2));
    //printf("After copying :%s ",strncpy(n5,n2,5));
    //strncat(name,n4,5);
    //printf("After concat :%s ",name);
    //int cmp=strcmp(n2,n5);
    //int cmp1=strcmp(n2,n4);
    //int cmp2=strncmp(n2,n4,4);
    //printf("Comparing string n2 and n5 %d \n",cmp);
    //printf("Comparing string n2 and n3 %d",cmp2);
    char *pos=strchr(n4,'W');
    if(pos!=0)
        printf("found ");
    else
        printf("not found");


    

    
    



    return 0;
}