#include<stdio.h>
int main(){
    int i=1;
    int n;
    scanf("%d", &n);
    int sum = 0;
    int term1 = 1;
    int term2 = 3;
    while(i<=n){
        sum+=term1*term2;
        term1++;
        i++;
    }
    printf("%d", sum);
}

