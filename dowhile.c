#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=1;
    do
    {
        b=a*b;
        a=a-1;
    }
    while(a>=1);
printf("\n %d",b);
getch();
}