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

  printf("今日は %d月 %d日です\n", month, day);

  return 0;
}
