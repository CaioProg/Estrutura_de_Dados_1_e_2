#include <stdio.h>

int main(void) {
    typedef struct {
        int dia, mes, ano;

    }data;

    int i = 1234;

    printf("Tamanho de data %d bytes.\n",
        (int)sizeof(data));
    printf("variável i = %d\n", i);
    printf("Endereço do i %ld\n",
        (long int)&i);
    printf("Endereço do i em hex %p\n",
        (void*)&i);
} 