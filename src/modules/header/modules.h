#ifndef MODULES_H
#define MODULES_H

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

/*PARSER*/

int file_parser_obj(char *file_name, model_data *data);

/*AFFINE TRANSFORMATIONS*/

void move_X(model_data *data, const double k);


#endif  // MODULES_H
