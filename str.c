#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],d[10];
int c,v;
    scanf("%s",&a);
    scanf("\n%s",&d);
    c=strlen(a);
    {printf("%d",c);}
    strcpy(b,a);
    {printf("\n%s\n",&b);}
    strcat(a,d);
    {printf("\n%s",&a);}
{   
    v=strcmp(a,b)==0;
    if(v<0)
    {
        printf("\nstrings are same");
        }
    else
    {
        printf("\nnot same strings");
        }
    }
        strrev(a);
    {printf("\n%s",&a);}
    gets;
}    