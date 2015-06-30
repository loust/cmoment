#ifndef CMOMENT_C
#define CMOMENT_C
#include <stdio.h>
#include <math.h>
//#include <tgmath.h>

void displayHelp(){
    printf("Moment\n\n \
cmoment  [-t: DISP-VECTOR, FORCE-VECTOR, THETA] | \
[-t: DISP-VECTOR, FORCE-VECTOR]\n \
        [-m: MASS, VELOCITY]\n \
        [-h]\n \
\n[OPTIONS]\n\n \
-t      Torque\n \
Usage: [r] [F] [sin(theta)] (sine is optional)\n \
    moment -t 1 2 3\n \
\n \
-m      Momentum\n \
Usage: [m] [v]\n \
    moment -m 2 3\n \
\n \
-h      Help\n \
    Opens the help page.\n");
}

float torques(float r ,float F ,float theta){
    return (r*F*sin(theta));
}

float torque(float r,float F){
    return (r*F);
}

float momentum(float m, float v){
    return (m*v);
}

#endif
