#ifndef TURING_MACHINE_H
#define TURING_MACHINE_H

#include "tape.h"
#include "rules.h"

#define START_STATE 0

void turing_machine_init();
void turing_machine_run();

#endif  // TURING_MACHINE_H