#include <stdio.h>

int proximo_id(void) {
    static int id = 0;  // criado uma vez até o fim do prog.
    return ++id;        // pre-incremento: devolve 1, 2, 3,...
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", proximo_id());
    }
    printf("\n");
    return 0;
}
