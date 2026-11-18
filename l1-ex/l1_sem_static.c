// mesma funcao, porem SEM static
#include <stdio.h>

int proximo_id(void) {
    int id = 0;   //  renasce a cada chamada
    return ++id;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", proximo_id());
    }
    printf("\n");
    return 0;
}
