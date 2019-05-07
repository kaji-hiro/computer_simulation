#include <stdio.h>

void selection_sort(int *array, int num){
  int min, min_num, tmp;
  for (size_t i = 0; i < num; i++) {
    min_num = i;
    for (size_t j = i; j < num; j++) {
      if (array[min_num] > array[j+1]){
        min_num = j+1;
      }
    }
    tmp = array[i], array[i] = array[min_num], array[min_num] = tmp;
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

  selection_sort(array,num);

  printf("ソートしました\n");
  for (size_t i = 0; i < num; i++) {
    printf("要素%d:%d\n", i+1, array[i]);
  }
  return 0;
}
