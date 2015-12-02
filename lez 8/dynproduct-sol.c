/* dynproduct.c (Prof.Cordone)*/

#include <stdio.h>
#include <stdlib.h>
#include "iocrema.h"

typedef int *Row;
typedef Row *Matrix;


int main (int argc, char *argv[])
{
  Matrix A, B, I, C;
  int n, r, c, k;
  int somma;


  /* Legge la dimensione delle matrici */
  StampaStringa("Inserire la dimensione delle matrici: ");
  n = LeggeIntero();
  StampaStringa("\n");

  /* Aggiungere qui l'allocazione delle matrici */
  A = (Matrix) calloc(n+1,sizeof(Row));
  for (r = 1; r <= n; r++)
    A[r] = (Row) calloc(n+1,sizeof(int));

  B = (Matrix) calloc(n+1,sizeof(Row));
  for (r = 1; r <= n; r++)
    B[r] = (Row) calloc(n+1,sizeof(int));

  I = (Matrix) calloc(n+1,sizeof(Row));
  for (r = 1; r <= n; r++)
    I[r] = (Row) calloc(n+1,sizeof(int));

  C = (Matrix) calloc(n+1,sizeof(Row));
  for (r = 1; r <= n; r++)
    C[r] = (Row) calloc(n+1,sizeof(int));

  /* Costruisce una matrice identità I */
  for (r = 1; r <= n; r++)
    for (c = 1; c <= n; c++)
      if (r == c)
        I[r][c] = 1;
      else
        I[r][c] = 0;

  /* Costruisce una matrice A i cui elementi sono la somma degli indici di riga e colonna */
  for (r = 1; r <= n; r++)
    for (c = 1; c <= n; c++)
      A[r][c] = r+c;

  /* Costruisce una matrice B i cui elementi sono la differenza degli indici di riga e colonna */
  for (r = 1; r <= n; r++)
    for (c = 1; c <= n; c++)
      B[r][c] = r-c;

  /* Costruisce il prodotto delle matrici A e B */
  for (r = 1; r <= n; r++)
    for (c = 1; c <= n; c++)
    {
      somma = 0;
      for (k = 1; k <= n; k++)
        somma += A[r][k] * B[k][c];
      C[r][c] = somma;
    }

  /* Stampa la matrice A */
  for (r = 1; r <= n; r++)
  {
    for (c = 1; c <= n; c++)
    {
      StampaIntero(A[r][c]);
      StampaStringa(" ");
    }
    StampaStringa("\n");
  }
  StampaStringa("\n");

  /* Stampa la matrice B */
  for (r = 1; r <= n; r++)
  {
    for (c = 1; c <= n; c++)
    {
      StampaIntero(B[r][c]);
      StampaStringa(" ");
    }
    StampaStringa("\n");
  }
  StampaStringa("\n");

  /* Stampa la matrice C */
  for (r = 1; r <= n; r++)
  {
    for (c = 1; c <= n; c++)
    {
      StampaIntero(C[r][c]);
      StampaStringa(" ");
    }
    StampaStringa("\n");
  }

  /* Aggiungere qui la deallocazione delle matrici */
  for (r = 1; r <= n; r++)
    free(A[r]);
  free(A);

  for (r = 1; r <= n; r++)
    free(B[r]);
  free(B);

  for (r = 1; r <= n; r++)
    free(I[r]);
  free(I);

  for (r = 1; r <= n; r++)
    free(C[r]);
  free(C);

  return EXIT_SUCCESS;
}
