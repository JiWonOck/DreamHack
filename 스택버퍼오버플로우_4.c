// stack-4.c
#include <stdio.h>
int main(void) {
	char buf[32] = {0, };
	read(0, buf, 31);
	sprintf(buf, "Your Input is: %s\n", buf);
	puts(buf);
}

/*buf는 32칸- Your Input is: -->15칸=17칸 이지만
    스택버퍼오버플로우하려면 sfp:4, ret:4 총 8글자 더써야함*/
