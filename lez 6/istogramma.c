/* istogramma.c

  Dato un testo, si calcoli il numero di occorrenze di ogni lettera da 'a' a 'z',
  senza distinguere fra maiuscole e minuscole. Si stampi l'istogramma nei tre formati:

  a **
  b *
  c ***

  a b c
  * * *
  *   *
      *

      *
  *   *
  * * *
  a b c

  che corrispondono al testo "cabacc"

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_COMMANDLINE 1
#define EXIT_FILEACCESS  2
#define EXIT_MEMORY      3

#define NAME_LENGTH 255

typedef enum {FALSE,TRUE} boolean;
typedef char Parola[NAME_LENGTH+1];


void InterpretaLineaComando (int argc, char *argv[], char *NomeFile);

/* Calcola il numero di occorrenze di ogni lettera nel file NomeFile */
void CalcolaFrequenze (char *NomeFile, int *Frequenza);

/* Stampa il risultato nei tre formati disponibili */
void StampaFrequenzeFormato1 (int *Frequenza);
void StampaFrequenzeFormato2 (int *Frequenza);
void StampaFrequenzeFormato3 (int *Frequenza);


int main (int argc, char *argv[])
{
  char NomeFile[NAME_LENGTH+1];
  int Frequenza['z'-'a'+1];


  /* Interpreta la linea di comando per caricare la stringa e il nome del file */
  InterpretaLineaComando(argc,argv,NomeFile);

  /* Calcola il numero di occorrenze di ogni lettera nel file NomeFile */
  CalcolaFrequenze(NomeFile,Frequenza);

  /* Stampa il risultato */
  StampaFrequenze(Frequenza);

	 return EXIT_SUCCESS;
}


void StampaIstruzioni (char *comando)
{
  fprintf(stderr,"%s nomefile\n",comando);
  fprintf(stderr,"nomefile: nome del file da elaborare\n");
}


/* Interpreta la linea di comando per caricare il nome del file */
void InterpretaLineaComando (int argc, char *argv[], char *NomeFile)
{
  if (argc != 2)
  {
    fprintf(stderr,"Linea di comando errata!\n");
    StampaIstruzioni(argv[0]);
    exit(EXIT_COMMANDLINE);
  }

  strcpy(NomeFile,argv[1]);
}


/* Calcola il numero di occorrenze di ogni lettera nel file NomeFile */
void CalcolaFrequenze (char *NomeFile, int *Frequenza)
{
}


/* Stampa il risultato nel primo formato */
void StampaFrequenzeFormato1 (int *Frequenza)
{
}


/* Stampa il risultato nel secondo formato */
void StampaFrequenzeFormato2 (int *Frequenza)
{
}


/* Stampa il risultato nel terzo formato */
void StampaFrequenzeFormato3 (int *Frequenza)
{
}
