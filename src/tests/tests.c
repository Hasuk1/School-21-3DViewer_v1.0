#include "../modules/header/modules.h"

int main() {
  model_data data_my = {0};
  int status_my = file_parser_obj("obj_files/cube.obj", &data_my);
  if (status_my == OK) return 1;
  for (int i = 0; i < (int)data_my.vertices_v_count * 3; i++) {
    printf("%lf ", data_my.vertices_v_arr[i]);
    if ((i + 1) % 3 == 0) {
      printf("\n");
    }
  }
  for (int i = 0; i < (int)data_my.polygonals_f_count * 2; i++) {
    printf("%d ", data_my.polygonals_f_arr[i]);
    if ((i + 1) % 6 == 0) printf("\n");
  }
  free(data_my.vertices_v_arr);
  free(data_my.polygonals_f_arr);
  return 0;
}