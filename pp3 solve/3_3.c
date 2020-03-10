#include<stdio.h>
int main(){
    int i;
    int a, b;
    printf("Enter Two integer: ");
    scanf("%d%d", &a, &b);
    for(i=a;i <= b;i++){
        if( i % 3 == 0){
            printf("%d\n", i);
        }


    }

    return 0;

}

