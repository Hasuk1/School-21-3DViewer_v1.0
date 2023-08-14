#ifndef PARSER_H
#define PARSER_H

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
  unsigned int vertices_count;
  double *vertices_arr;
  unsigned int vertex_indices_count;
  int *vertex_indices_arr;
} obj_data;

#endif //PARSER_H
