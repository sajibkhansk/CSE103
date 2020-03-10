int main()
{
 int x, y, z;
 printf("Enter the value of x: ");
 scanf("%d", &x);
 printf("Enter the value of y: ");
 scanf("%d", &y);
 printf("Enter the value of z: ");
 scanf("%d", &z);
 //this program will calculate the product of three integers;
 int sum, sub, multi;
 sum = x + y + z;
 sub = x - y - z;
 multi = x * y * z;

 printf("Sum: %d\n", sum);
 printf("Sub: %d\n", sub);
 printf("Mul: %d", multi);
 return 0;
}
