#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your post code :");
    scanf("%d", &n);
    if(n == 1206){
    printf("Dhaka Cantonment");
    }
    else if(n == 1209){
    printf("Jigatala");
    }
    else if(n == 1213){
    printf("Banani");
    }
    else if(n == 1212){
    printf("Badda");
    }
    else if(n == 1236){
    printf("Dhania");
    }
    else if(n == 1332){
    printf("Narisha");
    }
    else if(n == 1310){
    printf("keranigonj");
    }
    else if(n == 1211){
    printf("Lalbag");
    }
    else if(n == 1216){
    printf("Mirpur");
    }
    else{
        printf("Could not find");
    }
    return 0;
}


