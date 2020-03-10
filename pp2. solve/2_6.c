#include<stdio.h>
int main()
{
    int h, m, t;
    scanf("%d%d", &h, &m);
    if ( h == 24 ){
        printf("0 : %d", m);
    }
    else if (h > 12){
            t = h -12;
        printf(" %d : %d", t, m);
    }
    else if (h < 12){
        printf("%d : %d", h, m);
        }
    else if (h == 12){
        printf("%d : %d", h, m);
    }
}
