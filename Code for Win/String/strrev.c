/**
 * 11.C program to find reverse of a string
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
    printf("s1: %s\n", s1);
    printf("s2: %s", s2);


}
