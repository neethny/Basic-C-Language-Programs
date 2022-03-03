#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum,multiply,n;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i=i+1)
    {
        multiply=i*i;
        sum=sum+multiply;
    }
printf("\n %d",sum);
getch();
}