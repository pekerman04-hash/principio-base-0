#include <stdio.h>
#include <math.h>
#include "base0_core.h"

Vector3D calcular_base0(double n_valor) {
    int saltos_metricos[4] = {4, 2, 4, 3};
    int idx = (int)n_valor % 4;
    int delta = saltos_metricos[idx];

    double r_ajustado = (n_valor * delta) / 16.0;
    double grados_modulados = fmod((n_valor * delta) / 2.0, 360.0);
    double theta_rad = (grados_modulados / 180.0) * PI;

    Vector3D v;
    v.x = r_ajustado * cos(theta_rad);
    v.y = r_ajustado * sin(theta_rad);
    v.z = n_valor / 2.0;
    v.radio_ajustado = r_ajustado;
    v.factor_delta = delta;
    
    return v;
}

int main(void) {
    printf("Content-Type: application/json\n\n");
    
    double n_prueba = 1234567;
    Vector3D res = calcular_base0(n_prueba);
    
    printf("{\n");
    printf("  \"N\": %.0f,\n", n_prueba);
    printf("  \"factor_delta\": %d,\n", res.factor_delta);
    printf("  \"radio_ajustado\": %.6f,\n", res.radio_ajustado);
    printf("  \"coordenada_3d\": [%.6f, %.6f, %.6f]\n", res.x, res.y, res.z);
    printf("}\n");
    
    return 0;
}
