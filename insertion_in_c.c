#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,k,a[10],value;
    printf("enter the total no of elements in the array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element location");
    scanf("%d",&k);
    for(i=n;i>=k;i--)
    {
        a[i+1]=a[i];
        a[i]=a[i-1];
    }
    printf("enter the element you want to enter");
    scanf("%d",&value);
    a[k]=value;
    n=n+1;
    printf("the updated array");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}