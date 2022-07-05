#include <stdio.h>

struct TEST {
  int age;
  int gender;
  char name[20];
};

int set_human(struct TEST *a, int age, int gender, const char *name); // TEST 구조체 객체 대입 함수 선언

char copy_str(char *dest, const char *src); // string copy 함수선언 = strcpy 함수와 기능 같음

int main() {
  struct TEST human; // TEST 구조체 변수 선언

  set_human(&human, 10, 1, "Lee"); // set_human 함수로 TEST 구조체 변수 주소값, 10, 1, "Lee" 전달

  printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
  return 0;
}

int set_human(struct TEST *a, int age, int gender, const char *name) {
  a->age = age; // 예제1과 같은 구조로 동작
  a->gender = gender; // 위와 같음
  copy_str(a->name, name); // copy_str 함수로 TEST 구조체 name 객체와 main에서 전달된 name 값 전달

  return 0;
}

char copy_str(char *dest, const char *src) {
  while (*src) {	// 전달된 배열(문자열) 갯수만큼 동작
    *dest = *src;	// *src = src[0] = a.name[0] = human.name[0]
    //printf("%c ", src[0]); // 1번 : L, 2번 : e, 3번 : e 
    src++; // src[0] += 1 를 하여 메모리 위치 char byte 만큼 1증가(src[1] 로 증가)
    dest++; // 위와 같음 
  }

  *dest = '\0'; // 문자열 마지막 메모리 주소에 '\0' 대입 

  return 0;  
}
