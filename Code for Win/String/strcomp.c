#include<stdio.h>
int main()
{
    char s1[99];
    char s2[99];
    printf("s1 : ");
    gets(s1);
    printf("s2 : ");
    gets(s2);
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    printf("L1 = %d\n", i);
    while(s2[j]!='\0')
    {
        j++;
    }
    printf("L2 = %d\n", j);
    int flag;
    if(i==j)
    {
        flag=1;
        while(s1[i]!='\0'&&s2[j]!='\0')
        {

            if(s1[i]==s2[j])
            {
            flag=0;
            }
            i++;
            j++;
        }
    }
    if(flag==0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

}c
