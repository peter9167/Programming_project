#include <stdio.h>

char copy_str(char *dest, const char *src);

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
  struct Books Harry_Potter;

  copy_str(Harry_Potter.name, "Harry Potter");
  copy_str(Harry_Potter.auth, "J.K. Rolling");
  copy_str(Harry_Potter.publ, "Scholastic");
  Harry_Potter.borrowed = 0;

  printf("å �̸� : %s \n", Harry_Potter.name);		// ��� : å �̸� : Harry Potter 
  printf("���� �̸� : %s \n", Harry_Potter.auth);	// ��� : ���� �̸� : J.K. Rolling 
  printf("���ǻ� �̸� : %s \n", Harry_Potter.publ);	// ��� : ���ǻ� �̸� : Scholastic 

  return 0;
}

char copy_str(char *dest, const char *src) {
  while (*src) {
    *dest = *src;
    src++;
    dest++;
  }

  *dest = '\0';

  return 1;
}
