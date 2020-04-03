/**
    5/6.string upper and lower case
*/
#include<stdio.h>
int main()
{
  char s1[88];
  gets(s1);
  strupr(s1);
  printf("\tUPPERCASE: %s\n", s1);
  strlwr(s1);
  printf("\tlowercase: %s\n", s1);

}
