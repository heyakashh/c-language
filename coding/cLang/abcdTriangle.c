#include <stdio.h>
int main()
{   int n;
    printf("Enter a Number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            int d=64+j;
            char c=(char)d;
            printf("%c",c);
        }
        printf("\n");
    }
    
    return 0;

}
