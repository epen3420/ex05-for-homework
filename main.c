#include<stdio.h>

int main(void){
  int month = 0;
  int day = 0;

  printf("現在の月を入力してください:\n");
  scanf("%d", &month);
  printf("現在の日にちを入力してください:\n");
  scanf("%d", &day);

  if (month < 1 || month > 12){
    printf("月数が不正です。もう一度やり直してください。\n");
    return 0;
  }

  int isDayError = 0;

  if (day < 1){
    isDayError = 1;
  }

  if (month == 2 && day > 28){
    isDayError = 1;
  }
  else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30){
    isDayError = 1;
  }
  else if (day > 31){
    isDayError = 1;
  }

  if(isDayError){
    printf("日数が不正です。もう一度やり直してください。\n");
    return 0;
  }

  printf("今日は %d月 %d日です\n", month, day);

  return 0;
}
