#include <stdio.h>
#include "turing_machine.h"

int current_state;

void turing_machine_init() {
    tape_init();
    current_state = START_STATE;
}

void turing_machine_run() {
    while (current_state >= 0) {
        char symbol = tape_read();
        int i;

        for (i = 0; i < NUM_RULES; i++) {
            if (rules[i].current_symbol == symbol && current_state == rules[i].next_state) {
                tape_write(rules[i].new_symbol);
                
                if (rules[i].move_direction == 'L') {
                    tape_move_left();
                } else if (rules[i].move_direction == 'R') {
                    tape_move_right();
                }
                
                current_state = rules[i].next_state;
                break;
            }
        }
    }
}