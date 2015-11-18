#include <stdio.h>
#include <stdlib.h>
#define SIZEC 3
#define SIZER 4

void stampaMatrice(int mat[SIZER][SIZEC],unsigned int nrow,unsigned int ncol){
 for(int i=0;i<SIZER;i++){
        for(int j=0;j<SIZEC;j++){
        printf("\t%d",mat[i][j]);
        }
        printf("\n");
 }
}
void stampaMatriceGirata(int mat[SIZER][SIZEC],unsigned int nrow,unsigned int ncol){
 for(int i=SIZEC-1;i>=0;i--){
        for(int j=0;j<SIZER;j++){
        printf("\t%d",mat[j][i]);
        }
        printf("\n");
 }
}
int main()
{
    int matx[SIZER][SIZEC];
    int scelta,min,max,med;
    int uscita=0;
    float media;
    printf("Inserisci il vettore di 10cifre\n");
    for(int i=0;i<SIZER;i++){
        for(int j=0;j<SIZEC;j++){
            printf("Elemento  matrice[%d][%d]:",i,j);
            scanf("%d",&matx[i][j]);
        }
    }

    while(!uscita){
    printf("\nMENU:\n");
    printf("1-stampa matrice\n2-stampa matrice ruotata 90 gradi in senso antiorario\nscelta->");
    scanf("%d",&scelta);
    switch(scelta){
        case 1:
           // bubbleSort(matx,SIZER,SIZEC);
            printf("\n\nMATRICE:\n");
            stampaMatrice(matx,SIZER,SIZEC);
        break;
        case 2:
             printf("\n\nMATRICE:\n");
            stampaMatriceGirata(matx,SIZER,SIZEC);
        break;

        default:
            uscita=1;
            break;
    }

}

    return 0;
}
