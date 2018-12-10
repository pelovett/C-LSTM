#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct vector {
        int size;
        double *vec;
};


float vec_sig(float x){
        return ( 1.0 /
                (1.0+(pow(M_E,-x))) );
}        


float vec_tanh(float x){
        return ( (pow(M_E,2.0*x) - 1.0)/
                 (pow(M_E,2.0*x) + 1.0));
}


int main(int argc, char *argv[]){
        double a_vec[5] = {-4,-2,0,2,4};
        int a_size = 5;
        struct vector a_struct = {a_size, a_vec};
        for(int i=0; i<a_struct.size; i++){
                printf("Value: %f Tanh value: %f\n",
                        a_struct.vec[i],vec_tanh(a_struct.vec[i]));
        } 
}
