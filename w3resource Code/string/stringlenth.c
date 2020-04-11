 /*(2)Write a program in C to find the length of a string without using library function. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15*/
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
