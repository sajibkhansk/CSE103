#include <stdio.h>
int main (){
		int a, b, c, d, e, f, g, h, i, j, k, l, x, y, z;
		puts("Enter EAN digits :");
		scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &z);
		x = (a + c + e + g + i + k) + (b + d + f + h + j + l) * 3 - 1;
		y = 9 - (x % 10);
		if (y == z){
			printf("The product is cheacked.\n");
		}
		else{
			printf("An error occured.\n");
		}
		printf ("Calculated last digit = %d", y);
		return 0;

}

