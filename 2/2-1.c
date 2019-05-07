#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, int num){
  int tmp;
  for (size_t i = num; i > 2; i--) {
    for (size_t j = 0; j < i-1; j++) {
      if (array[j] > array[j+1]){
        tmp = array[j], array[j] = array[j+1], array[j+1] = tmp;
      }
    }
  }
}

int main(void){
  int num;
  printf("ソートする配列の要素数:");
  scanf("%d", &num);
  int array[num];
  for (size_t i = 0; i < num; i++) {
    printf("要素%d:", i+1);
    scanf("%d", &array[i]);
  }

  bubble_sort(array,num);

  printf("ソートしました\n");
  for (size_t i = 0; i < num; i++) {
    printf("要素%d:%d\n", i+1, array[i]);
  }
  return 0;
}
