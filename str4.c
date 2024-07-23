#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter name \n");
    char str[30];
    
    fgets(str,30,stdin);
    int i=(strlen(str))-1;
     while(i!=-1){
        printf("%c",str[i]);
        i--;    
    }
    return 0;
    }
