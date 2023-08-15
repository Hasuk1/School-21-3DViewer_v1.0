#include "../modules/header/load_model.h"

#include "../../s21_3DViewer_v1.0-main/src/modules/model_loading.h"

int main (){
    model_data *data_my;
    obj_data *data_oleg;
    data_my->polygonals_f_count = 0;
    data_my->vertices_v_count = 0;
    data_oleg->vertex_indices_count = 0;
    data_oleg->vertices_count = 0;
    int status_my = file_parser_obj("cube.obj", &data);
    for (int i = 0; i < )
}