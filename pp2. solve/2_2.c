#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your salary :");
    scanf("%d", &n);
    if(n < 30000){
    printf("Tax percentage of income %d", n * 4/100);
    }
    else if(n >= 30000 && n <=70000){
        printf("Tax percentage of income %d", n * 10/100);
    }
    else {
         printf("Tax percentage of income %d", n * 15/100);
    return 0;
}
}
