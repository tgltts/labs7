#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor(int v[], int n) {
    srand(time(NULL));
    for(int i=0; i<n; i++) {
        v[i] = 1 + rand() % (n*2);
    }
}

void imprimir_vetor(int v[], int n) {
    printf("Vetor: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


int busca_linear(int v[], int n, int e) {
    int cont = 0;
    for(int i = 0; i < n; i++) {
        cont++;
        if(v[i] == e) {
            printf("contador[linear]: %d\n", cont);
            return i;
        }
    }
    printf("contador[linear]: %d\n", cont);
    return -1;
}

int main() {
    int n = 10;
    int vetor[n];

    gerar_vetor(vetor, n);
    imprimir_vetor(vetor, n);

    int elemento;
    printf("Digite o elemento para buscar: ");
    scanf("%d", &elemento);

    int pos = busca_linear(vetor, n, elemento);
    if(pos != -1) {
        printf("Elemento %d encontrado na posicao %d.\n", elemento, pos);
    } else {
        printf("Elemento %d nao encontrado no vetor.\n", elemento);
    }

    return 0;
}
