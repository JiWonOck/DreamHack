//stack-1

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char buf[16];
    gets(buf);
    
    printf("%s", buf);
}

// 버퍼를 오버플로우시켜 ret 영역을 0x41414141로 만들기
//abcd ... stAAAA 입력하기
