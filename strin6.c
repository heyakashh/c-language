#include <string.h>
#include <stdio.h>
int main(){
    printf("Enter name \n");
    char str[30];
    int i,alpha,constant=0;
    i=alpha=constant;
    fgets(str,30,stdin);
    int len=(strlen(str));
     while(i!=len){
          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            alpha++;
          } 
          else if(str[i]>='a'&&str[i]<='z'){
            constant++;
          } 
          i++;
    }
    printf("alpha are %d and constant are %d", alpha,constant);
    return 0;
    }