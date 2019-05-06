#include <stdio.h>

int main(void){
  int n[25] = {1,1};
  int array[100] = {};
  int j = 0;
  for (size_t i = 0; i < 22; i++) {
    n[i + 2] = n[i] + n[i + 1];
    if(n[i] > 10){
      if(n[i] > 100){
        if(n[i] > 1000){
          if(n[i] > 10000){
            array[j] = n[i] / 10000;
            j++;
          }
          array[j] = n[i] / 1000 % 10;
          j ++;
        }
        array[j] = n[i] / 100 % 10;
        j ++;
      }
      array[j] = n[i] / 10 % 10;
      j++;
    }
    array[j] = n[i] % 10;
    j++;
  }

  printf("%d\n", array[49]);

  return 0;

}
