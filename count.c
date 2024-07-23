#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter sentence \n");
    char str[300];
    int word=0;
    
    fgets(str,30,stdin);
    int len=strlen(str);
    int i=0;
     while(i!=len-1){
        i++;
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
                word++;
        }  
          
    }
    printf("Total words are %d \n",word);
    return 0;
    }
