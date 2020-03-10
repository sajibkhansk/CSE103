#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k, l, sum, div, sub;
    printf("12 digit UPC code : ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    sum=((a+c+e+g+i+k)*3+(b+d+f+h+j))-1;
    div= sum % 10;
    sub= 9 - div;
    printf("%d\n", sum);
    printf("%d\n", div);
    printf("%d\n", sub);
    if (sub == l){
        printf("valid");
    }
    else{
        printf("Not Valid");
    }
    return 0;
}
