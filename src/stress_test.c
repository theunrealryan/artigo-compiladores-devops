#include <stdio.h>
#include <stdlib.h>

int main() {
    // Tamanho: 10 milhões de inteiros
    long long tamanho = 10000000;

    // Alocação manual de memória no Heap
    int *array_gigante = (int *)malloc(tamanho * sizeof(int));

    if (array_gigante == NULL) {
        printf("Erro: Out of Memory (OOM)\n");
        return 1;
    }

    // Preenchendo o array para garantir que o SO aloque as páginas de memória
    for (long long i = 0; i < tamanho; i++) {
        array_gigante[i] = i;
    }

    // Liberação manual da memória (evita memory leaks)
    free(array_gigante);
    return 0;
}
