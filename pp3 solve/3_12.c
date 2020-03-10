#include<stdio.h>
int main(){
    int n, r;
    printf("Enter a Number:");
    scanf("%d", &n);
    int sum = 0;
    while(n != 0){
            r = n % 10;
            sum = sum * 10 + r;
            printf("%d", r);
            n = n /10;

}
}
