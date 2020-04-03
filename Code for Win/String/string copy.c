//(2)Write a C program to copy one string to another string.
#include<Stdio.h>
int main()
{
    char s1[99];
    gets(s1);
    char s2[99];
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;

    }
    s2[i]!='\0';
    printf("s1 : %s \n", s1);
    printf("s2 : %s \n", s2);
    printf("Total characters copied : %d", i);


}
