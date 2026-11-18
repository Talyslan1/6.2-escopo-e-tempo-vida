#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *v = malloc(5 * sizeof *v);
    if (v == NULL) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        v[i] = i + 1;
    }

    free(v);
    printf("%d\n", v[2]);  // erro po leitura depois do free
    return 0;
}
