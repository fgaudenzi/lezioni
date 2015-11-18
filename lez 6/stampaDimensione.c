#include <stdio.h>
main()
{
int ch, in, sh, lo, fl, dd, ld;
int *p=&in;
ch = sizeof(char);
in = sizeof(int);
sh = sizeof(short);
lo = sizeof(long);
fl = sizeof(float);
dd = sizeof(double);
ld = sizeof(long double);
printf("La dimensione di un char%d\n", ch);
printf("La dimensione di uno short è%d\n", sh);
printf("La dimensione di un int è%d\n", in);
printf("La dimensione di un long è%d\n", lo);
printf("La dimensione di un float è%d\n", fl);
printf("La dimensione di un double è%d\n", dd);
printf("La dimensione di un long double è %d\n", ld);
}
