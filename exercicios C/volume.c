#include <stdio.h>

int main()
 {
    float l,w,h,v; // dimensoes e volume do ratangulo

    printf("L=?"); scanf("%f", &l);
    printf("W=?"); scanf("%f", &w);
    printf("H=?"); scanf("%f", &h);
    v = l*w*h; //calculo do volume

    printf("LxWxH: %f*%f*%f (cm)\n", l,w,h);
    printf("Volume: %f (cm^3)\n", v);
    return 0;
 }
