#include <stdio.h>
int main (){
		int x, a, b, c, d, e, f, g, h, i, j;
		puts("Enter a integer (Between 0 to 31)= ");
		scanf("%d", &x);
		a = x / 2;
		b = x % 2;
		c = a / 2;
		d = a % 2;
		e = c / 2;
		f = c % 2;
		g = e / 2;
		h = e % 2;
		i = g / 2;
		j = g % 2;
		printf("The binary value of %d is %d%d%d%d%d", j, h, f, d, b);
		return 0;
}

