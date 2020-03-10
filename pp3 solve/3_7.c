#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    int n;
    scanf("%d", &n);
    int sum = 0;
    int mul = 1;
    int term1 = 1;
    int term2= 3;
    int power = 1;
    while(i <= n){
        sum += term1 * pow(term2, power);
        term1+=1;
        power++;
        i++;
    }
    printf("%d\n", sum);
}

