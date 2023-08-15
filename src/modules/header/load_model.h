#ifndef PARSER_H
#define PARSER_H

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
  unsigned int vertices_v_count;
  double *vertices_v_arr;
  unsigned int polygonals_f_count;
  int *polygonals_f_arr;
} model_data;

enum exit_status { OK, ERROR };

#endif  // PARSER_H
