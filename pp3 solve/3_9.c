#include<stdio.h>
int main(){
    int i;
    int counter=0;
    int n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if( n%i ==0){
                printf("%d\n", i);
            counter++;
        }
    }
        printf("%d\n", counter);
    }



