#include<stdio.h>
int main()
{
    int en, wh, ph,total_income;
    //here en means = employee number,wh means working hour and ph means per hour
    scanf("%d%d%d", &en, &wh, &ph);
    total_income = wh * ph;
    printf("employe number = %d and receive $ %d ", en, total_income);
    return 0;


}
