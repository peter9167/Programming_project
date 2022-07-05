#include <stdio.h>

char copy_str(char *dest, char *src);

int Print_Obj_Status();

struct obj {	// sturct obj 라는 구조체를 정의하였고
		// 멤버는 아래와 같다.
  char name[20];
  int x, y;
} Ball; 	// sturct obj 형의 Ball 이란 구조체 변수를 정의하며, 전역 변수

int main() {
  Ball.x = 3;
  Ball.y = 4;
  copy_str(Ball.name, "RED BALL");

  Print_Obj_Status(Ball);

  return 0;
}

int Print_Obj_Status() {
  printf("Location of %s \n", Ball.name);
  printf("( %d , %d ) \n", Ball.x, Ball.y);

  return 0;
}

char copy_str(char *dest, char *src) {
  while (*src) {
    *dest = *src;
    src++;
    dest++;
  }

  *dest = '\0';

  return 1;
}

