#include <stdio.h>
int main (){
		int a, b, c, d, e, f, g, h, i, j, k, x, y, z;
		puts("Enter UPC digits :");
		scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &z);
		x = (a + c + e + g + i + k) * 3 + (b + d + f + h + j) - 1;
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

