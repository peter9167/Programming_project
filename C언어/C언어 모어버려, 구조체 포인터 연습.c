#include <stdio.h>
#include <string.h>

struct test {
  char name[5];
  int age;
};

int main() {
  struct test st;
  struct test *ptr;
  
  ptr = &st;
  
  // ptr->name[5] = "Kim"; // 문자열은 초기화를 제외하고는 "내용" 으로 대입이 안된다.
  strcpy_s(ptr->name, 5, "Kim"); // ststrcpy_s(문자열을 복사할 버퍼, 버퍼의 크기, 복사할 원본 문자열) 
  ptr->age = 10;
  
  printf("st 의 name 멤버 : %s \n", st.name);
  printf("st 의 age 멤버 : %d \n", st.age);
  
  return 0;
}
