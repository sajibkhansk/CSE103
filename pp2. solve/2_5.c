#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number :$");
    scanf("%d", &n);
    if(n >= 0 && n <= 9)
    {
        printf("Number of digit : 1");
    }
    else if(n >= 10 && n <= 99)
    {
        printf("Number of digit : 2");
    }
    else if(n >= 100 && n <= 999){
        printf("Number of digit : 3");
    }
    else if(n >= 1000 && n <= 9999){
        printf("Number of digit : 4");
    }
    if(n >= 10000 && n <= 99999){
        printf("Number of digit : 5");
    }

    return 0;
}
