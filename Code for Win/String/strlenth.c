//Write a C program to find length of a string.
#include<stdio.h>
int main()
{
int l=0;
char s1[99];
printf("Enter Your String: ");
gets(s1);
int i=0;
while(s1[i]!='\0')
{
    l++;
    i++;
}
printf("String Lenth: %d", l);
}
