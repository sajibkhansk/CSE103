#include<stdio.h>
int main()
{
    float n, t;
    printf("Enter Your salary :$");
    scanf("%f", &n);
    if(n < 2500){
    printf("commission rate :39" );
    }
    else if(n >= 2500 && n < 6250){
        printf("commission rate :%f", 56 + n * 0.66/100);
    }
        else if(n >= 6250 && n < 20000){
        printf("commission rate :%f", 76 + n * 0.34/100);
    }
        else if(n >= 20000 && n < 50000){
        printf("commission rate :%f", 100 + n * 0.22/100);
    }
        else if(n >= 50000 && n < 500000){
        printf("commission rate :%f", 115 + n * 0.11/100);
    }
        if(n >= 500000){
    printf("commission rate :%f", 225 + n * 0.09/100);
    }

    return 0;
}

