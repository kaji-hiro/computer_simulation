#include <stdio.h>
#include <math.h>

double f2(double x1,double x2,double t,double o){
  return - x2 - x1 + 10 * sin(o * t);
}

int main(void){
  double x1 = 0, x2 = 0, t = 0, num, max;
  int i = 0, j = 0;
  for (double o = 0.1; o <= 10; o+=0.01) {
    num = M_PI / 100 / o;
    i = 0;
    max = 0;
    while(i < 5001){
      x1 += x2 * num;
      x2 += num * f2(x1, x2, t, o);
      t += num;
      i++;
      if (i > 4000){
        if (max < x2) max = x2;
      }
    }
    j++;
    printf("%f,%f\n", log10(o), max);
  }
  return 0;
}
