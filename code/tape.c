#include "tape.h"

char tape[TAPE_SIZE];
int head_position;

void tape_init() {
    int i;
    for (i = 0; i < TAPE_SIZE; i++) {
        tape[i] = ' ';
    }
    head_position = TAPE_SIZE / 2;
}

char tape_read() {
    return tape[head_position];
}

void tape_write(char symbol) {
    tape[head_position] = symbol;
}

void tape_move_left() {
    head_position--;
}

void tape_move_right() {
    head_position++;
}