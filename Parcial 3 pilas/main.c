#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100
#define EMPTY -1

struct pila{
    int arreglo[MAX];
    int tope;
};

void push(struct pila *p, int x);
int pop(struct pila *p);
void top (struct pila p);
void clear(struct pila *p);
void prueba_pila(int n, struct pila *p);

int main()
{
    struct pila p;
    int n;
    clear(&p);
    printf("Tam de pila: ");
    scanf("%d", &n);
    prueba_pila(n,&p);
    return 0;
}

void prueba_pila(int n, struct pila *p){
    int x;

    printf("nums a meter: ");
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        push(p, x);
    }

    printf("Datos: ");
    for(int i=0;i<=p->tope;i++){
        printf("%d ", p->arreglo[i]);
    }


    printf("\n");

    printf("Cant a sacar: ");
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        pop(p);
    }

    printf("Datos: ");
    n=n-x;
    for(int i=0; i <= p->tope; i++){
        printf("%d ", p->arreglo[i]);
    }
}

void push(struct pila *p, int x){
    p->arreglo[++(p->tope)]=x;
}

int pop(struct pila *p){
    return p->arreglo[(p->tope)--];
}

void top (struct pila p){
    printf("%d\n", p.arreglo[p.tope]);
}

void clear(struct pila *p){
    p->tope=EMPTY;
}
