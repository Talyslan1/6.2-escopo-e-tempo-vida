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

    printf("%d\n", v[2]); 
    free(v);
    v = NULL; // evita ponteiro pendente (dangling)
    return 0;
}
