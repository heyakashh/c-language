#include <stdio.h>
#include <string.h>
int main(){

    printf("Enter first name \n");
    const char first[30];
    scanf("%s",&first);
    int len=strlen(first);
    printf("Enter last name \n");
    char last[30];
    scanf("%s",&last);

    printf("Concating the first name and last name to access full name %s \n",strcat(first,last));
    int len2 =strlen(first);
    if(len==len2)
        printf("not concated");
    else
        printf("concated");


    return 0;
}