#include <stdio.h>
#include <math.h>

int main(void){
  double x = 1, sum1 = 0, sum2 = 0;
  do{
    sum2 = sum1;
    sum1 += 1 / x;
    if (x > 0){
      x = (x + 1) * -1;
    }
    else{
      x = x * -1 + 1;
    }
  }while(fabs(sum1 - sum2) > 0.00000001);

  printf("%f\n", sum1);
  return 0;

}
