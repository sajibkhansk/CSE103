/**3string individual character print
*/
#include <stdio.h>

int main()
{
    char s1[99];
    gets(s1);
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c ", s1[i]);
        i++;
    }

    return 0;
}
