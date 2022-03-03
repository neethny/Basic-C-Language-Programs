#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,cat;
    scanf("%d ",&a);
    scanf("%d ",&b);
    printf("the value of a = %d and b = %d \n",a,b);
    cat=a;
    a=b;
    b=cat;
    printf("the value after swapping a =%d b=%d",a,b);
    getch();
}