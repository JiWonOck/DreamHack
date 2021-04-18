// off-by-one-1.c
#include <stdio.h>
void copy_buf(char *buf, int sz) {
    char temp[16];
    
    for(i = 0; i <= sz; i++)
        temp[i] = buf[i];
}
int main(void) {
    char buf[16];
    
    read(0, buf, 16);
    copy_buf(buf, sizeof(buf));
}

//버퍼의 경계 계산 혹은 반복문의 횟수 계산 시 < 대신 <=을 쓰거나
//0부터 시작하는 인덱스를 고려하지 못할 때 발생 
//컴파일하면 오류
 
