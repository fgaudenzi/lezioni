#include <stdio.h>
int calcFatt(int numero); 
main(){ 
	int n,fat; printf("\nCalcola il fattoriale di un numero");
 	printf("\n\nIntrodurre il numero "); 
	scanf("%d",&n); fat=calcFatt(n); 
	printf("\n Fattoriale di %d = %d",n,fat);
}
/* Calcola Fattoriale utilizzando la Ricorsione*/ 
int calcFatt(int numero){ 
	int f; 
	if (!numero){ 
 		f=1;
	}else{
		 f=numero*calcFatt(numero-1); 
	}
return f; 
}
