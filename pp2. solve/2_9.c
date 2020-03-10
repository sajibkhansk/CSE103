int main (){
    int x;
    printf("speed knots: ");
    scanf("%d", &x);
    if(x<1){
        printf("calm");
    }
    else if (x>=1 && x<=3){
        printf("light air");
    }
    else if (x>=4 && x<=27){
        printf("breeze");
    }
    else if (x>=28 && x<=47){
        printf("gale");
    }
    else if (x>=48 && x<=63){
        printf("storm");
    }
    else if(x>63){
        printf("hurricane");
    }
}
}

