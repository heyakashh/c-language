#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[300];
    printf("enter the sentence");
    fgets(str,300,stdin);
    int len=strlen(str);
    int i,alpha,digit,special,space=0;
    i=alpha=digit=special=space;
    while(i!=len){
        
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
            ++alpha;
        }
        else if(str[i]>='0'&& str[i]<='9'){
            digit++;
        }
        else if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
            space++;
        }
        else{
            special++;
        }
        i++;
    }
    printf("aplha are:%d\ndigits are:%d\nspaces are:%d \nspecial are:%d",alpha,digit,space,special);

    return 0;
}