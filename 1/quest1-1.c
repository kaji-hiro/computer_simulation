#include <stdio.h>
#include <math.h>

int main(void){

  double x = 1, y = 2, tmp, a = 0, b = 0;

  do{
    tmp = y;
    y += x;
    x = tmp;
    b = a;
    a = x / y;
    printf("%f\n", a);
  }while(fabs(a - b) > 0.000001);

  printf("%f\n", a);

  return 0;
}
