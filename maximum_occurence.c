#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    char freq[100];
    int i=0,max;
    int ascii;
    printf("input strings");
    fgets(str,200,stdin);
    for(i=0;i<100;i++){
        freq[i]=0;
    }
    i=0;
    while(str[i]!='\0'){
        ascii=(int)str[i];
        freq[ascii]+=1;
        i++;
    }
    max=0;
    for(i=0;i<100;i++){
        if(i!=32){
            if(freq[i]>freq[max]){
                max=i;
            }
        }
    }
    printf("%c is %d times",max,freq[max]);
    return 0;
}