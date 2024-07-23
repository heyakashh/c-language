#include <stdio.h>
#include <string.h>
int main(){
    char str[100],choice;
    int i,count=0;
    printf("input string");
    fgets(str,100,stdin);
    printf("enter character");
    scanf("%c",&choice);
    for(i=0;str[i]!='\0';++i){
        if(choice==str[i]){
            ++count;
        }
    }
    printf("the frequency of %c is %d",choice,count);

    return 0;
}