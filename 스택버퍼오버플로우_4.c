// stack-4.c
#include <stdio.h>
int main(void) {
	char buf[32] = {0, };
	read(0, buf, 31);
	sprintf(buf, "Your Input is: %s\n", buf);
	puts(buf);
}

/*buf�� 32ĭ- Your Input is: -->15ĭ=17ĭ ������
    ���ù��ۿ����÷ο��Ϸ��� sfp:4, ret:4 �� 8���� �������*/
