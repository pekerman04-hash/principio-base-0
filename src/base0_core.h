#ifndef BASE0_CORE_H
#define BASE0_CORE_H

#define U_MAX 17
#define PI 3.14159265358979323846

typedef struct {
    double x;
    double y;
    double z;
    double radio_ajustado;
    int factor_delta;
} Vector3D;

Vector3D calcular_base0(double n_valor);

#endif
