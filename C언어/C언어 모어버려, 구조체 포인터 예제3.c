#include <stdio.h>

struct TEST {
  int c;
  int *pointer;
};

int main() {
  struct TEST t;
  struct TEST *pt = &t;
  int i = 0;

  /* t �� ��� pointer �� i �� ����Ű�� �ȴ�*/
  t.pointer = &i;

  /* t �� ��� pointer �� ����Ű�� ������ ���� 3 ���� �����*/
  *t.pointer = 3;

  printf("i : %d \n", i); // i : 3  

  /*

  -> �� * ���� �켱������ �����Ƿ� ���� �ؼ��ϰ� �ȴ�.
  ��,
  (pt �� ����Ű�� ����ü ������ pointer ���) �� ����Ű�� ������ ���� 4 ��
  �ٲ۴�. ��� ���̴�/

  */
  *pt->pointer = 4;

  printf("i : %d \n", i); // i : 4 
  return 0;
}
