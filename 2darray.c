#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    { 
           scanf ("%d", &a[i][j]);
    }
    }
    for(i=0;i<2;i++)
    {
        printf("\n");
    for(j=0;j<2;j++)
    {
    printf ("%d", a[i][j]);
    }
    }
     for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    { 
           scanf ("\n%d", &b[i][j]);
    }
    }
    for(i=0;i<2;i++)
    {
        printf("\n");
    for(j=0;j<2;j++)
    {
    printf ("%d", b[i][j]);
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {    c[i][j]=a[i][j]+b[i][j];
    }}
    for(i=0;i<2;i++)
    {
        printf("\n");
    for(j=0;j<2;j++)
    {
    printf ("%d", c[i][j]);
    }
    }
    getch();
}