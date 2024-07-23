#include <stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {for(int j=1;j<=n+1-i;j++)
            {   int d=j+64;
                char c =(char)d;
                printf("%c ",c);
            }   
         printf("\n");
        }
    return 0;
    
}