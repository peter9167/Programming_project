#include <stdio.h>

char copy_str(char *dest, char *src);

int Print_Obj_Status();

struct obj {	// sturct obj ��� ����ü�� �����Ͽ���
		// ����� �Ʒ��� ����.
  char name[20];
  int x, y;
} Ball; 	// sturct obj ���� Ball �̶� ����ü ������ �����ϸ�, ���� ����

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

