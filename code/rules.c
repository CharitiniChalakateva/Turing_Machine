#include "rules.h"

Rule rules[NUM_RULES] = {
    {'0', '1', 'R', 1},
    {'1', '0', 'L', 0},
    {' ', ' ', 'N', -1}
};