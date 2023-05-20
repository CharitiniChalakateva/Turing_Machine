#ifndef RULES_H
#define RULES_H

typedef struct {
    char current_symbol;
    char new_symbol;
    char move_direction;
    int next_state;
} Rule;

#define NUM_RULES 3

extern Rule rules[NUM_RULES];

#endif  // RULES_H