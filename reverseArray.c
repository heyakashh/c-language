#include <stdio.h>
void reverseArray(int arr[],int size){
    int arrR[size];
    
    for(int i=size-1;i>-1;i--){
        //for(int j=0;j<size;j++){
           // arrR[i]=arr[j];} 
           arrR[i]=arr[i];
        
           printf("%d ",arrR[i] );
    }
    //for(int i=0;i<size;i++)
      //  printf("%d ",arrR[i] );
}
int main(){
    int size=0;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d /n",&arr[i] );
    reverseArray(arr,size);
    return 0;
    
}


    