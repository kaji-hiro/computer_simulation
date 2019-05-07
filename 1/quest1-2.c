#include <stdio.h>
#include <math.h>

#define NUMBER 100

int digit_check(const int num){
  int digits = 0, tmp = num;
  while(tmp != 0){
    tmp /= 10;
    digits++;
  }
  return digits;
}

int main(void){
  long int sequence1 = 1, sequence2 = 1, tmp, num, digits;
  long int comulative_sum [NUMBER] = {0};
  int j = 1;

  while(comulative_sum[NUMBER] == 0){
    digits = digit_check(sequence1);
    for (int i = digits; i > 0; i--) {
      tmp = pow(10, i);
      comulative_sum[j] = comulative_sum[j-1] + sequence1 * 10 / (int) tmp % 10;
      printf("%d", sequence1);
      j++;
    }
    tmp = sequence2, sequence2 += sequence1, sequence1 = tmp;
  }

  do{
    printf("何番目の数字を出力しますか:");
    scanf("%d", &num);
    if (num == 0){
      break;
    }
    else{
      printf("%d番目の数字は%dです\n", num, comulative_sum[num-1] - comulative_sum[num-2]);
    }
  }while(1);

  return 0;

}
