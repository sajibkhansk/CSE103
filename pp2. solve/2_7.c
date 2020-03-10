#include<stdio.h>
int main()
{
    int d1,m1,y1;
    int d2,m2,y2;

   printf("Please enter your First date:");
   scanf("%d%d%d",&d1,&m1,&y1);
   printf("Please enter your second Date:");
   scanf("%d%d%d",&d2,&m2,&y2);

   if(y2>y1)
   {
       printf("The date %d/%d/%d is before %d/%d/%d.",d1,m1,y1,d2,m2,y2);

   }

   else if(y2==y1 && m2>m1)

   {
       printf("The date %d/%d/%d is before %d/%d/%d.",d1,m1,y1,d2,m2,y2);


   }
   else if(y2==y1 && m2==m1 && d2>d1)
   {
       printf("The date %d/%d/%d is before %d/%d/%d.",d1,m1,y1,d2,m2,y2);

   }

   else
   {
       printf("The date %d/%d/%d is before %d/%d/%d.",d2,m2,y2,d1,m1,y1);

   }
}
