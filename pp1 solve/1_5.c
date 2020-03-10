int main()
{
 int sec, h, m, s;
 printf("enter the time in second: ");
 scanf("%d", &sec);
 h = sec / 3600;
 m = (sec - h * 3600) / 60;
 s = sec - h * 3600 - m * 60;
 printf("hour %d", h);
 printf("\tminute %d", m);
 printf("\tsecond %d", s);
 return 0;
}
