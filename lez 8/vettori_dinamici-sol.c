/* vettori_dinamici.c */

#include <stdio.h>
#include <stdlib.h>

#include "iocrema.h"

void	AggiungiElemento(int **pp_V, int *p_dim, int elemento);
void	StampaVettore(int *V, int dim);
void 	CancellaElemento(int pos, int **V, int *dim);

int main (int argc, char *argv[])
{
	int dim,elemento;
	//Allocare un vettore di interi di dimensione 1
	
	dim = 1;
	int *V = (int *) calloc(dim,sizeof(int));
	
	
	do{
	StampaStringa("Inserisci elemento vettore: ");
	elemento=LeggeIntero();
	//Chiamata a funzione per riallocazione inserimento 
	AggiungiElemento(&V, &dim, elemento);
	
	
	}while(elemento != -1);
	//chiamata a funzione per eliminare l'ultimo elemento del vettore (-1)
	CancellaElemento(dim-1,&V,&dim);
	
	
	
	int pos;
	StampaStringa("\n\nInserisci il valore da eliminare\n\n");
	pos=LeggeIntero();
	
	//chiamata a funzione per eliminare l'elemento alla posizione 'pos'
	CancellaElemento(pos,&V, &dim);
	StampaStringa("\n\nStampaVettore: \n\n");
	StampaVettore(V, dim);

  
  
  return EXIT_SUCCESS;
}


void	AggiungiElemento(int **pp_V, int *p_dim, int elemento){

	
    int *temp;
		temp = realloc(*pp_V,(*p_dim+1)*sizeof(int));
	
	if(temp==NULL){
		printf("Errore di allocazione!!");
		exit(-1);
	}
	else 
		*pp_V = temp;
	
	(*pp_V)[*p_dim] = elemento;
	
	(*p_dim)++;

}
void	StampaVettore(int *V, int dim){
	int i;
	for(i=1;i<dim;i++){
		StampaIntero(V[i]);
		ACapo();
	}


}

void CancellaElemento(int pos, int **V, int *dim){
	
	if(pos<*dim){
		while(pos < *dim){
			(*V)[pos]=(*V)[pos+1];
			pos++;
		}
		(*dim)--;
		
		int *temp;
		temp = realloc(*V,(*dim-1)*sizeof(int));
	
	if(temp==NULL){
		printf("Errore di allocazione!!");
		exit(-1);
	}
	else 
		*V = temp;
		
	}
	else{
		StampaStringa("ERRORE!! Il valore non esiste!\n\n");
	}
}
