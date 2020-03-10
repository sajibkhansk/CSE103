#include <stdio.h>
int main(){
		int x, a, b, c, d, e, f, g, h, i, j, k, l;
		printf("Enter an integer between 0 to 32767 = ");
		scanf("%d", & x);
		a = x / 8;
		b = x % 8;
		c = a / 8;
		d = a % 8;
		e = c / 8;
		f = c % 8;
		g = e / 8;
		h = e % 8;
		i = g / 8;
		j = g % 8;

		printf("Octal value = %d%d%d%d%d", j, h, f, d, b);

	return 0;
}
