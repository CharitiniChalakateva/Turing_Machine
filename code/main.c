#include <stdio.h>
#include "turing_machine.h"

int main() {
    turing_machine_init();
    turing_machine_run();
    printf("Final tape contents: ");
    
    int i;
    for (i = 0; i < TAPE_SIZE; i++) {
        printf("%c", tape[i]);
    }
    
    printf("\n");
    return 0;
}
