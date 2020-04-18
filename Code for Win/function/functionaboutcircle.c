/**
 (2)program to find diameter, circumference and area of a circle using functions
 */
#include<stdio.h>
float d (float a)
{
    return 2*a;
}
float c (float a)
{
    return 2*3.14*a;
}
float ar (float a)
{
    return 3.14*(a*a);
}

int main()
{
    float radious;
    printf("Enter Area : ");
    scanf("%f", &radious);
    printf("Diamiter : %.2f \n", d(radious));
    printf("Circumference : %.2f \n", c(radious));
    printf("Area : %.2f \n", ar(radious));

}

