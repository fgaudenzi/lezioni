#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bubbleSort(int *array, int elemN)
 {

   int i, tmp, ultimo;
   int alto=elemN; /* elemN è il numero degli elementi del vettore da ordinare */

   while (alto >= 0) /* in questo modo si evita 1 passaggio*/
     {
         ultimo = -1;
         for (i=0; i<alto; i++)
         {
           if (array[i]>array[i+1]) /* sostituire ">" con "<" per avere un ordinamento decrescente */
           {
             tmp = array[i];
             array[i] = array[i+1];
             array[i+1] = tmp;
             ultimo = i;
           }
         }
     alto = ultimo;
     }
 }

int calcMediana(int v[],unsigned int N){
    bubbleSort(v,N);
    return v[N/2];
}
float calcMedia(int v[],unsigned int N){
    float media;
    int somma=0;
    for (int i=1; i < N-1; i++) {
        somma+=v[i];
    }
    media=(float)somma/ (float)N;
    return media;
}
int findMin(int v[],unsigned int N){
    int min;
    min=v[0];
    for (int i=1; i < N-1; i++) {
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;
}
int findMax(int v[],unsigned int N){
    int max;
    max=v[0];
    for (int i=1; i < N-1; i++) {
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}
void SelectionSort(int a[], unsigned int N) {
  int i, j, min;

  for (i=0; i < N-1; i++) {
    for (j= i+1; j < N; j++) {
      if (a[i] > a[j]) {
      min=a[j];
      a[j]=a[i];
      a[i]=min;
      }
    }
  }
}
void stampaVettore(int *vett,unsigned int N){
    for(int i=0;i<N;i++){
        printf("Elemento  vett[%d]:%d\n",i,vett[i]);
    }
}



int main()
{
    int vett[SIZE];
    int scelta,min,max,med;
    int uscita=0;
    float media;
    printf("Inserisci il vettore di 10cifre\n");
    for(int i=0;i<SIZE;i++){
        printf("Elemento  vett[%d]:",i);
        scanf("%d",&vett[i]);
    }
    while(!uscita){
    printf("\nMENU:\n");
    printf("1-stampa vett ordinato\n2-stampa max\n3-stampa min\n4-stampa media\n5-stampa mediano\nuscita\n scelta->");
    scanf("%d",&scelta);
    switch(scelta){
        case 1:
            bubbleSort(vett,SIZE);
            printf("\n\nVettore Ordinato\n");
            stampaVettore(vett,SIZE);
        break;
        case 2:
            max=findMax(vett,SIZE);
            printf("\n\nMassimo:%d\n",max);
        break;
        case 3:
            min=findMin(vett,SIZE);
            printf("\n\nMinimo:%d\n",min);
        break;
        case 4:
            media=calcMedia(vett,SIZE);
            printf("\n\nMedia:%f\n",media);
        break;
        case 5:
            med=calcMediana(vett,SIZE);
            printf("\n\nMediana:%d",med);
        break;

        default:
            uscita=1;
            break;
    }

}

    return 0;
}
