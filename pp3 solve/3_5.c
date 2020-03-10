#include <stdio.h>
#include <math.h>
int main(){
    int counter = 1;
    int n;
    scanf("%d", &n);
    int sum = 0;
    int term = 3;
    int power = 3;
    while(counter <= n){
        sum += pow(term, power);
        term += 3;
        counter++;
    }
    printf("%d\n", sum);
}

