/* 구조체를 리턴하는 함수 */
#include <stdio.h>

struct AA function(int j); //  "struct AA" 형을 리턴하는 함수 function 이다.  

struct AA { // AA 라는 구조체 정의 
  int i;
};

int main() {
  struct AA a;
  
  // truct AA 형을 리턴하기 때문에 리턴하는 것은 struct AA 형의 것이다.  
  a = function(10);
  printf("a.i : %d \n", a.i); // a.i : 10

  return 0;
}

struct AA function(int j) {
  //  "struct AA" 형을 리턴하는 함수 function 이다. 
  struct AA A;
  A.i = j;
  
  // function(10) 은 'i 멤버의 값이 10 인 구조체 변수' 를 리턴하여 a 의 i 멤버 값은 10 
  return A;
}
