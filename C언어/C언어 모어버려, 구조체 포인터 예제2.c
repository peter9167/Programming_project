#include <stdio.h>

struct test {
  int a, b;
};

int main() {
  struct test st;
  struct test *ptr;
  
  ptr = &st;
  
  ptr->a = 1;
  ptr->b = 2;
  
  printf("st ÀÇ a ¸â¹ö : %d \n", st.a);
  printf("st ÀÇ b ¸â¹ö : %d \n", st.b);
  
  return 0;
}
