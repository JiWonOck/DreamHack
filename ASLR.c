//example3.c
//gcc -o example3 example3.c -m32
#include <stdio.h>
#include <stdlib.h>
int main(void){
  char * buf = (char *)calloc(1, 4096);
  FILE * fp = 0;
  size_t sz = 0;
  fp = fopen("/proc/self/maps", "r");
  sz = fread(buf, 1, 4096, fp);
  fwrite(buf, 1, sz, stdout);
}

//서버에 ASLR이 켜져있을 때, 라이브러리, 힙, 스택 영역의 주소가 랜덤하게 바뀌는 것을 확인할 수 있습니다.
//라이브러리 주소가 계속 바뀌기 때문에, 스택 버퍼 오버플로우 취약점을 공격할 때 정적 주소를 이용한 공격을 사용할 수 없습니다.
//하지만 example3의 실행 결과를 보면 알 수 있듯이, 바이너리 코드 영역의 주소는 변하지 않습니다. 이를 이용해 ASLR 보호 기법을 우회하여 익스플로잇할 수 있습니다.




