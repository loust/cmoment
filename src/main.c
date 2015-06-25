#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "cmoment.h"

int main(int argc, const char *argv[]){
    if (argc > 1){
        int i, j;
        for (i = 1; i < argc; i++){
            switch(*(char*)argv[i]){
                case 0x2D:{
                    for (j = 0; j < sizeof(argv[i]); j++) {
                        switch(argv[i][j]){
                            case 0x74:{
                                if (argv[i+3]){
                                    printf("Torque of r:%.2f, F:%.2f, theta:%.2f;\n",atof(argv[i+1]),atof(argv[i+2]),atof(argv[i+3]));
                                    if (argc > i){
                                        printf("Torque = %f\n",torques(atof(argv[i+1]),atof(argv[i+2]),atof(argv[i+3])));
                                    }
                                }else{
                                    printf("Torque of r:%.2f, F:%.2f;\n",atof(argv[i+1]),atof(argv[i+2]));
                                    if (argc > i){
                                        printf("Torque = %f\n",torque(atof(argv[i+1]),atof(argv[i+2])));
                                    }
                                }// else
                                break;
                            }// case 0x74
                            case 0x68:{
                                displayHelp();
                                break;
                            }//case 0x68
                            case 0x6D:{
                                if (argv[i+2]){
                                    printf("Momentum of m:%.2f, v:%.2f;\n",atof(argv[i+1]),atof(argv[i+2]));
                                    printf("Momentum = %f\n",momentum(atof(argv[i+1]),atof(argv[i+2])));
                                }
                            }// case 0x6D
                        }// switch
                    }// for
                    break;
                }// case 0x2D
            }// switch
        }// for
    }else{
        //display the help page.
        displayHelp();
    }// else
    return 0;
}// main
