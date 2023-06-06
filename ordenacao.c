#include <stdio.h>
#include <stdlib.h>
#include <float.h> // biblioteca usada para acessar DBL_MAX e DBL_MIN

int ler_numero(){
    int N;
    system("cls");
    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &N);
  
    return N;
}

void receber_numeros(double *vet, int N){
    for (int i = 0; i < N; i++){
        printf ("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    } 
}

void mostrar_numeros_digitados(double *vet, int N){
    system("cls");
    printf ("\nNUMEROS DIGITADOS:\n");
    
    for (int i = 0; i < N; i++) {
        printf ("%.1lf\n", vet[i]);
    } 
}

void maior(double *vet, int N){
    int posmaior;
    double maior = DBL_MIN; // O numero mais negativo representavel em C
    for (int i = 0; i < N; i++) {
        if (vet[i]>=maior){
            maior = vet[i];
            posmaior = i;
        }
    }
    printf("\nMaior valor digitado: %.2lf\n", maior); 
    printf("\nPosicao do maior numero: %d\n", posmaior);
}

void menor(double *vet, int N){
    int posmenor;
    double menor = DBL_MAX;  // O maior numero representavel em C
    for (int i = 0; i < N; i++) {
        if (vet[i] <= menor){
            menor = vet[i];
            posmenor = i; 
        }
    }
    printf("\nMenor valor digitado: %.2lf\n", menor); 
    printf("\nPosicao do menor numero: %d\n\n", posmenor);
}

void crescente(double *vet, int N){
    int x, i, j;
    for (i = 0; i < N; i++){
        for (j = 1; j < N; j++){
            if (vet[j]<vet[j-1]){
                if (vet[j]<vet[i]){
                    x = vet[j];
                    vet[j] = vet[i];
                    vet[i] = x; 
                }  
            }
        }
    }        

    for ( j = 0; j < N; j++){
    printf(" CRESCENTE: %.1lf\n",  vet[j]);
    }
}

void decrescente(double *vet, int N){
     int x, i, j;
     for (i = 0; i < N; i++){
        for (j = 1; j < N; j++){
            if (vet[j] > vet[j-1]){
                if (vet[j]>vet[i]){
                    x = vet[j];
                    vet[j] = vet[i];
                    vet[i] = x; 
                }  
            }
        }
    }        
    for ( j = 0; j < N; j++){
    printf("\nDECRESCENTE: %.1lf",  vet[j]);
    }
}

int main (){
    int N = ler_numero();
    double vet[N];
    receber_numeros(vet, N);
    mostrar_numeros_digitados(vet, N);
    maior(vet, N);
    menor(vet, N);
    crescente(vet, N);
    decrescente(vet, N);
    return 0;
} 


 