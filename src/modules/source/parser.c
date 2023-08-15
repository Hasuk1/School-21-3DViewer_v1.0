#include "../header/load_model.h"

void count_vertices_and_polygonals(FILE *file, model_data *data) {
  char *buff_str = NULL;
  size_t ln = 0;
  while (getline(&buff_str, &ln, file) != EOF) {
    if (strncmp(buff_str, "v ", 2) == 0) {
      data->vertices_v_count++;
    } else if (strncmp(buff_str, "f ", 2) == 0) {
      char *polygonals_indx = strtok(buff_str + 2, " ");
      while (polygonals_indx) {
        if (atoi(polygonals_indx)) data->polygonals_f_count++;
        polygonals_indx = strtok(NULL, " ");
      }
    }
  }
  if (buff_str) free(buff_str);
}

int memory_allocation(model_data *data) {
  int exit_status = OK;
  if (data->vertices_v_count)
    data->vertices_v_arr = calloc(data->vertices_v_count * 3, sizeof(double));
  if (data->polygonals_f_count)
    data->polygonals_f_arr = calloc(data->polygonals_f_count * 2, sizeof(int));
  if (!data->polygonals_f_arr || !data->vertices_v_arr) exit_status = ERROR;
  return exit_status;
}

int get_parse_status(model_data* data){
  int exit_status = OK;
  if (!data->vertices_v_arr[data->vertices_v_count * 3 - 1] || !data->polygonals_f_arr[data->polygonals_f_count * 2 - 1]) exit_status = ERROR;
  return exit_status;
}

int parse_vertices_and_polygonals(FILE *file, model_data *data) {
  int exit_status = OK;
  char *buff_str = NULL;
  size_t ln = 0, v_i = 0, f_j = 0;
  while (getline(&buff_str, &ln, file) != EOF) {
    if (strncmp(buff_str, "v ", 2) == 0) {
      double x = 0, y = 0, z = 0;
      sscanf(buff_str, "v %lf %lf %lf", &x, &y, &z);
      data->vertices_v_arr[v_i++] = x;
      data->vertices_v_arr[v_i++] = y;
      data->vertices_v_arr[v_i++] = z;
    } else if (strncmp(buff_str, "f ", 2) == 0) {
      int first_indx = 0;
      bool is_first_indx = true;
      char *polygonals_indx = strtok(buff_str + 2, " ");
      while (polygonals_indx) {
        int indx_value = atoi(polygonals_indx) - 1;
        if (indx_value) {
          if (is_first_indx) {
            data->polygonals_f_arr[f_j++] = indx_value;
            first_indx = indx_value;
            is_first_indx = false;
          } else {
            data->polygonals_f_arr[f_j++] = indx_value;
            data->polygonals_f_arr[f_j++] = indx_value;
          }
        }
        polygonals_indx = strtok(NULL, " ");
      }
      data->polygonals_f_arr[f_j++] = first_indx;
    }
  }
  if (buff_str) free(buff_str);
  exit_status = get_parse_status(&data);
  return exit_status;
}

int file_parser_obj(char *file_name, model_data *data) {
  int exit_status = OK;
  FILE *obj_file = fopen(file_name, "r");
  if (file_name != NULL && data != NULL && obj_file) {
    count_vertices_and_polygonals(file_name, data);
    if (memory_allocation(data) == OK) {
      fseek(obj_file, 0, SEEK_SET);
      exit_status = parse_vertices_and_polygonals(obj_file, data);
    } else
      exit_status = ERROR;
    fclose(obj_file);
  } else
    exit_status = ERROR;
  return exit_status;
}