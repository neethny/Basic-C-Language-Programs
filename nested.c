#include<stdio.h>
#include<conio.h>
int main()
{
    int i,b,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        {
        for(b=1;b<=i;b++)
            {
            printf("*");
            }
                printf("\n");
        }
getch();
}