#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter name \n");
    //char first[30];
    //scanf("%s",&first);
    char str[30];
    
    fgets(str,30,stdin);

    //int len=strlen(first);
    //printf("Welcome %s \n",first);
    //printf("Length of ur name is %d \n",strlen(str));
    int i=(strlen(str))-1;
    // while(str[i]!='\0'){
    //   printf("%c %d\n",str[i],i);
    //    i--;
    //}
    while(i!=-1){
        printf("%c",str[i]);
        i--;    
    }
    /*for(i=strlen(str)-1;i!=0;i--){
        printf("%c \n ",str[i]);

    }
    //printf("Length of ur name is %d",i);*/

    return 0;
    }
