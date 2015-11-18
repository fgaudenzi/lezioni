/* segreteria.c */

#include <stdio.h>
#include <stdlib.h>
#include "iocrema.h"

#define LUNGHEZZA         256
#define MAX_STUDENTI      100
#define MATRICOLA_BASE 600000

typedef struct {
  long id;
  char nome[LUNGHEZZA+1];
  char cognome[LUNGHEZZA+1];
} persona;

typedef struct {
  long matricola;
  persona identita;
} studente;


// Aggiunge uno studente con un dato "nome" e "cognome" a una "classe" con un dato numero di studenti.
// Lo studente va aggiunto  nella prima posizione vuota (NumStudenti+1).
// Il numero di matricola va automaticamente attribuito ed è immediatamente successivo a quella
// dell'ultimo studente inserito. Se la classe è vuota, il primo studente ha matricola MATRICOLA_BASE

void AggiungeStudente (char *nome, char *cognome, studente *classe, int NumStudenti);

void StampaPersona (persona p);

void StampaStudente (studente s);

// Stampa l'elenco degli studenti, uno per riga, utilizzando (approccio top-down)
// una funzione StampaStudente che riceve un dato di tipo "studente" e stampa
// nome e cognome (chiamando una funzione StampaPersona, che riceve un dato di tipo "persona")
// e la matricola fra parentesi tonde.
void StampaClasse (studente *classe, int NumStudenti);


int main (int argc, char *argv[])
{
  char nome[LUNGHEZZA+1], cognome[LUNGHEZZA+1];
  studente classe[MAX_STUDENTI+1];
  int NumStudenti;


  // Chiede all'utente di inserire un nuovo studente alla volta, fornendo nome e cognome
  NumStudenti = 0;
  do
  {
    StampaStringa("Inserire i dati di un nuovo studente (EXIT se si vuole terminare):\n");
    StampaStringa("Nome: ");
    LeggeStringa(nome);
    if (strcmp(nome,"EXIT") != 0)
    {
      StampaStringa("Cognome: ");
      LeggeStringa(cognome);
      AggiungeStudente(nome,cognome,classe,NumStudenti);
      NumStudenti++;
    }
  } while (strcmp(nome,"EXIT") != 0);

  StampaClasse(classe,NumStudenti);

  return EXIT_SUCCESS;
}


// Aggiunge uno studente con un dato "nome" e "cognome" a una "classe" con un dato numero di studenti.
// Lo studente va aggiunto  nella prima posizione vuota (NumStudenti+1).
// Il numero di matricola va automaticamente attribuito ed è immediatamente successivo a quella
// dell'ultimo studente inserito. Se la classe è vuota, il primo studente ha matricola MATRICOLA_BASE

void AggiungeStudente (char *nome, char *cognome, studente *classe, int NumStudenti)
{
  if (NumStudenti+1 > MAX_STUDENTI)
    printf("Errore: la classe e' piena!\n");
  else
  {
    if (NumStudenti == 0)
      classe[NumStudenti+1].matricola = MATRICOLA_BASE;
    else
      classe[NumStudenti+1].matricola = classe[NumStudenti].matricola + 1;

    strcpy(classe[NumStudenti+1].identita.nome,nome);
    strcpy(classe[NumStudenti+1].identita.cognome,cognome);
  }
}


// Stampa l'elenco degli studenti, uno per riga, utilizzando (approccio top-down)
// una funzione StampaStudente che riceve un dato di tipo "studente" e stampa
// nome e cognome (chiamando una funzione StampaPersona, che riceve un dato di tipo "persona")
// e la matricola fra parentesi tonde.

void StampaClasse (studente *classe, int NumStudenti)
{
  int i;

  for (i = 1; i <= NumStudenti; i++)
  {
    StampaStudente(classe[i]);
    StampaStringa("\n");
  }
}


void StampaPersona (persona p)
{
  StampaStringa(p.nome);
  StampaStringa(" ");
  StampaStringa(p.cognome);
}


void StampaStudente (studente s)
{
  StampaPersona(s.identita);
  StampaStringa(" (");
  StampaLong(s.matricola);
  StampaStringa(")");
}
