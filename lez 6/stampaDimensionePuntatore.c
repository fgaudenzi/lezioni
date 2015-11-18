#include <stdio.h>

main()
{
int ch,ch2, in, in2, lo, lo2;
long double ll; 
int ii;
char cc;
int *i=&ii;
char *c=&cc;
long double *l=&ll;
ch = sizeof(char);
ch2= sizeof(c);
in = sizeof(int);
in2= sizeof(i);
lo = sizeof(long double);
lo2= sizeof(l);

printf("La dimensione di un char :%d\n", ch);
printf("La dimensione di uno punt char :%d\n", ch2);
printf("La dimensione di un int:%d\n", in);
printf("La dimensione di un punt int:%d\n", in2);
printf("La dimensione di un double:%d\n", lo);
printf("La dimensione di un punt double:%d\n", lo2);
}
