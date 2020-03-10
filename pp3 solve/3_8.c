
#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    int n;
    scanf("%d", &n);
    int sum = 0;
    int mul = 1;
    int term1 = 1;
    int term2 = 2;
    int term3 = 3;
    while(i <= n){
        sum += term1 * term2 * term3;
        term1++;
        term2++;
        term3++;
        i++;
    }
    printf("%d\n", sum);
}
