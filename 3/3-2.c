#include <stdio.h>
#include <math.h>
#define NUMBER M_PI / 100

double f2(double x1,double x2,double t, double o){
  return - x2 / 2 - x1 + 10 * sin(o * t);
}

int main(void){
  double x1 = 0, x2 = 0, t = 0, o = 0.1;
  int i = 0;
  while(i < 100000){
    if (i > 4000)
      printf(" %f, %f, %f\n", t, log10(o), x2);
    x1 += x2 * NUMBER;
    x2 += NUMBER * f2(x1, x2, t, o);
    t += NUMBER;
    i++;
    o+= 0.01;
  }
}
