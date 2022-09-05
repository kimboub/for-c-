#include <stdio.h>

int main() {

  int input;//함수를 지정한다.

  scanf("%d",&input);//값을 입력받기

  printf("====%d단====\n",input);//구구단입력 
  for (int i=1;i<=9;i++)//for문 설계및 구구단 출력
    {
      printf("%d*%d=%d\n",input,i,input*i);//결과값
    }
  return 0;
}
