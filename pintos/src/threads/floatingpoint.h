/* new implementation */
#include <stdint.h>
#define FP (1<<14)              //fixed point 1
#define INT_MAX ((1<<31)-1)     //0 111...1
#define INT_MIN (-(1<<31))      //1 000...0

int i_to_fp (int n);
int fp_to_i (int f);
int fp_to_i_round (int f);
int add_fp (int f1, int f2);
int sub_fp (int f1, int f2);
int mult_fp (int f1, int f2);
int div_fp (int f1, int f2);
int add_both (int f, int n);
int sub_both (int f, int n);
int mult_both (int f, int n);
int div_both (int f, int n);