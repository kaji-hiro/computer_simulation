#include <stdio.h>
#include <math.h>
#define NUMBER M_PI / 200

// ω = 2.0, b = 0.5とする

double f2(double x1,double x2,double t){
  return - x2 / 2 - x1 + 10 * sin(2.0 * t);
}

int main(void){
  double x1 = 0, x2 = 0, t = 0;
  int i = 0;
  while(i < 10000){
    printf(" %f, %f, %f\n", t, x1, x2);
    x1 += x2 * NUMBER;
    x2 += NUMBER * f2(x1, x2, t);
    t += NUMBER;
    i++;
  }
  return 0;
}
