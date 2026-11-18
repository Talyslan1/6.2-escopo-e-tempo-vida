#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n) {
    int *v = malloc((size_t)n * sizeof *v);
    if (v == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    return v;  // como o bloco esta na heap, ele sobrevive ao return
}

int main(void) {
    int n = 5;
    int *seq = cria_sequencia(n);
    if (seq == NULL) {
        fprintf(stderr, "Falha ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    printf("\n");

    free(seq);  // quem recebeu o ponteiro é quem deve liberar
    return 0;
}
