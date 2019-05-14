#include <stdio.h>
#include <math.h>
#define NUMBER M_PI / 200

// D > 0の時
double f2(double x1,double x2,double b){
  return - x2 * b - x1 + 10;
}

int main(void){
  double x1 = 0, x2 = 0, t = 0, b = 0.1;
  int i = 0;
  while(i < 10000){
    printf(" %f, %f, %f\n", t, x1, x2);
    x1 += x2 * NUMBER;
    x2 += NUMBER * f2(x1, x2, b);
    t += NUMBER;
    i++;
  }
  return 0;
}
