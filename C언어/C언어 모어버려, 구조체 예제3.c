#include <stdio.h>

struct Books {
  /* å �̸� */
  char name[30];
  /* ���� �̸� */
  char auth[30];
  /* ���ǻ� �̸� */
  char publ[30];
  /* ���� ������? */
  int borrowed;
};

int main() {
  struct Books book_list[3]; // ����ü�� �迭�� �����Ͽ� �迭�� �� ���� 
  int i;

  for (i = 0; i < 3; i++) {
    printf("å %d ���� �Է� : ", i);
    scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
    book_list[i].borrowed = 0;
  }

  for (i = 0; i < 3; i++) {
    printf("------------------------------- \n");
    printf("å %s �� ����\n", book_list[i].name);
    printf("���� : %s \n", book_list[i].auth);
    printf("���ǻ� : %s \n", book_list[i].publ);

    if (book_list[i].borrowed == 0) {
      printf("�� ������\n");
    } else {
      printf("������ \n");
    }
  }
  return 0;
}

