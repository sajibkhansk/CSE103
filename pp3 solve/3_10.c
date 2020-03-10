#include<stdio.h>
int main(){
    int i;
    int counter=0;
    int n;
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        if(n % i == 0){
            if ( i % 2 != 0){

                counter++;


            }
        }
    }

        printf("%d", counter);
    }




