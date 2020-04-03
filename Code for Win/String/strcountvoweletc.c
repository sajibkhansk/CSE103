//9.Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
int main()
{
    char s1[99];
    gets(s1);
    int v=0,consonant=0,i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' ||
           s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
           {
           v++;
           }
        else
        {
            consonant++;
        }

        i++;
        }

    printf("Number of Vowel :%d\n", v);
    printf("Number of consonant :%d", consonant);


}
