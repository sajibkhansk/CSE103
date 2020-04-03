//10.String Word count
#include<stdio.h>
int main()
{
    char s1[99];
    gets(s1);
    int word=0,i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]==' ')
        {
            word++;
        }
        i++;
    }
    word++;

    printf("Number of word :%d\n", word);


}
