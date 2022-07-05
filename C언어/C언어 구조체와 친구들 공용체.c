#include <stdio.h>

union A {
  int i;
  char j;
};

int main() {
  union A a;
  
  a.i = 0x12345678;
  printf("%x", a.j); // 78 Ãâ·Â 
  
  return 0;
}
