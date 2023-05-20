#ifndef TAPE_H
#define TAPE_H

#define TAPE_SIZE 1000

void tape_init();
char tape_read();
void tape_write(char symbol);
void tape_move_left();
void tape_move_right();

#endif  // TAPE_H