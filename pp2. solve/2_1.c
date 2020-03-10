#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer :");
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 ==0){
        printf("Divisible by 3 and 5");
    }
    else if(n% 5 ==0){
        printf("%Divisible by  5");
    }
    else if(n % 3 == 0){
        printf("Divisible by 3");
    }
    else {
         printf("%Not divisible by 3 and 5");
    }
    return 0;
}
