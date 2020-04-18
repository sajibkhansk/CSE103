/**
  3.C program to concatenate two strings
 */
#include<stdio.h>
int main()
{
    char s1[99];
    printf("String 1: ");
    gets(s1);
    char s2[99];
    printf("String 2: ");
    gets(s2);
    int i=0,l=0;
    while(s1[i]!='\0')
    {
        i++;
        l++;
    }
    int j=0;
    while(s2[j]!='\0')
    {
        s1[l+j]=s2[j];
        j++;

    }
    printf("Strcon: %s", s1);


}
