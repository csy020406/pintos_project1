#include "threads/floatingpoint.h"


int i_to_fp (int n) {
    return n/FP;
}

int fp_to_i (int f) {
    return f/FP;
}

int fp_to_i_round (int f) { //반올림 내림
    if (f >= 0) return (f + FP/2) / FP;
    else return (f - FP/2) / FP;
}

int add_fp (int f1, int f2) {
    return f1+f2;
}

int sub_fp (int f1, int f2) {
    return f1-f2;
}

int mult_fp (int f1, int f2) {
    return ((int64_t) f1)*f2 / FP;
}

int div_fp (int f1, int f2) {
    return ((int64_t) f1)*FP / f2;
}

int add_both (int f, int n) {
    return f + FP*n;
}

int sub_both (int f, int n) {
    return f - FP*n;
}

int mult_both (int f, int n) {
    return f*n;
}

int div_both (int f, int n) {
    return f/n;
}