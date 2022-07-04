#include <stdio.h>

char copy_str(char *dest, const char *src);

struct Books {
  /* 책 이름 */
  char name[30];
  /* 저자 이름 */
  char auth[30];
  /* 출판사 이름 */
  char publ[30];
  /* 빌려 졌나요? */
  int borrowed;
};

int main() {
  struct Books Harry_Potter;

  copy_str(Harry_Potter.name, "Harry Potter");
  copy_str(Harry_Potter.auth, "J.K. Rolling");
  copy_str(Harry_Potter.publ, "Scholastic");
  Harry_Potter.borrowed = 0;

  printf("책 이름 : %s \n", Harry_Potter.name);		// 결과 : 책 이름 : Harry Potter 
  printf("저자 이름 : %s \n", Harry_Potter.auth);	// 결과 : 저자 이름 : J.K. Rolling 
  printf("출판사 이름 : %s \n", Harry_Potter.publ);	// 결과 : 출판사 이름 : Scholastic 

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
