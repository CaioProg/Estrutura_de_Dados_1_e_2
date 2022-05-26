#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int* p;
    p = (int*)malloc(sizeof(int));

    if (p == NULL) {
        printf("erro/n");

    }
    else {

        *p = 54;

        printf("Endereço: %x\nValor contido em p: %d", &p, *p);
    }
    
    return 0;
}