#include <stdio.h>
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    printf("Enter the size for array");
    int size;
    scanf("%d",&size);
    printf("Enter the elements for array");

    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int sum=sumArray(arr,size);
    printf("The sum of array is %d",sum);

    return 0;
}