// fsb-easy.c
#include <stdio.h>
int main(void) {
    int flag = 0x41414141;
    char buf[32] = {0, };
    
    read(0, buf, 31);
    printf(buf);
}

//프로그래머가 지정한 문자열이 아닌 사용자의 입력이 포맷 스트링으로 전달될 때 발생하는 취약점
//%x 8개 치면 공격 가능 
