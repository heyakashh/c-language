#include <stdio.h>
int main(){
    int digit;
    printf("enter total number");
    scanf("%d",&digit);
    char ele;
    int id=0;
char arr[digit];
for(int i=0;i<digit;i++){
    scanf("%c",&arr[i]);   
}
printf("enter number to find");
scanf("%c",&ele);
for(int i=0;i<digit;i++){
    if((int)ele==(int)arr[i]){
        printf("element %d found at index %d",ele,i);
         id=1;}       
}
switch (id)
{
//case 1: printf("Thanks");
   // break;
case 0: printf("element not found");
}
    return 0;
}      