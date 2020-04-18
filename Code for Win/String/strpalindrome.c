/**
 * 12.C program to find reverse of a string
 */
#include<stdio.h>
int main()
{
    char s1[99];
    gets(s1);
    char s2[99];
    int i=0,l=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
        l++;
    }
    printf("l= %d\n", l);
    for(i=l-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]='\0';
    int d= strcmp(s1, s2);
    if(d==0)
    {
        printf("Given string is Palindrome");
    }
    else
    {
        printf("Given string is not Palindrome");
    }



}
