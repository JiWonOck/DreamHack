// fsb-easy.c
#include <stdio.h>
int main(void) {
    int flag = 0x41414141;
    char buf[32] = {0, };
    
    read(0, buf, 31);
    printf(buf);
}

//���α׷��Ӱ� ������ ���ڿ��� �ƴ� ������� �Է��� ���� ��Ʈ������ ���޵� �� �߻��ϴ� �����
//%x 8�� ġ�� ���� ���� 
