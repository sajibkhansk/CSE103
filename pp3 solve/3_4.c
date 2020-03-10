#include<stdio.h>
#include<math.h>

int main (){
    int i;
    int x, n ;
    int power = 1;
    printf("Enter x and n: ");
    scanf("%d%d", &x, &n);
    for(i = 1; i <= n; i++ ){
        power = power * x;
    }
        printf("%d", power);
    return 0;
}

