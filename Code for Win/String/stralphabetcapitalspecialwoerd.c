//8.C program to find total number of alphabets, digits or special characters in a string
#include<stdio.h>
int main()
{
    char s1[99];
    gets(s1);
    int alphabet=0,digit=0,i=0,other=0;
    while(s1[i]!='\0')
    {
        if(s1[i]>='0' && s1[i]<='9')
        {
            digit++;
        }
        else if(s1[i]>='a' && s1[i]<='z' || s1[i]>='A' && s1[i]<='Z')
        {
            alphabet++;
        }

        else
        {
            other++;
        }
        i++;
    }

    printf("Number of Alphabet: %d\n", alphabet);
    printf("Number of Digit : %d\n", digit);
    printf("Number of other: %d\n", other);



}
