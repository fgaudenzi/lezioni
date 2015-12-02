/*
 ============================================================================
 Name        : c.c
 Author      : Filippo Gaudenzi
 Version     :
 Copyright   : GPL
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLASSE 10
struct stud{
    char nome[256];
};
int main(void) {
    struct stud studente[CLASSE];
    for(int i=0;i<CLASSE;i++){
        printf("Insert information for student n %d",i);
        gets(studente[i].nome);
    }
    
    //utilizzando la funzione random chiamare in maniera casuale uno alla volta gli studenti per l'interrogazione
    
    //calcolare la media della classe
    
    
    return 0;
}