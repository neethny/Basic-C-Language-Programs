#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int d;
    scanf("%d %d %d",&a, &b, &d);
    switch(d)
    {
    case 1:
    c=a+b;
    printf("%d",c);
    break;
    case 2:
    c=a-b;
    printf("%d",c);
    break;
    case 3:
    c=a*b;
    printf("%d",c);
    break;
    case 4:
    c=a/b;
    printf("%d",c);
    break;
    default:
    c=a%b;
    printf("%d",c);
    break;
    }
    getch();
}