/* vettori_dinamici.c */

#include <stdio.h>
#include <stdlib.h>

#include "iocrema.h"


void	StampaVettore(int *V, int dim);


int main (int argc, char *argv[])
{
	int dim,elemento;
	//Allocare un vettore di interi di dimensione 1
	dim = 1;
	
	
	
	
	do{
	StampaStringa("Inserisci elemento vettore: ");
	elemento=LeggeIntero();
	//Chiamata a funzione per riallocazione inserimento 

	
	
	}while(elemento != -1);
	//chiamata a funzione per eliminare l'ultimo elemento del vettore (-1)
	
	
	
	
	int pos;
	StampaStringa("\n\nInserisci il valore da eliminare\n\n");
	pos=LeggeIntero();
	
	//chiamata a funzione per eliminare l'elemento alla posizione 'pos'
	
	
	
	
	
	StampaStringa("\n\nStampaVettore: \n\n");
	StampaVettore(V, dim);

  
  
  return EXIT_SUCCESS;
}



void	StampaVettore(int *V, int dim){
	int i;
	for(i=1;i<dim;i++){
		StampaIntero(V[i]);
		ACapo();
	}


}


