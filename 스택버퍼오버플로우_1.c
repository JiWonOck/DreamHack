//stack-1

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char buf[16];
    gets(buf);
    
    printf("%s", buf);
}

// ���۸� �����÷ο���� ret ������ 0x41414141�� �����
//abcd ... stAAAA �Է��ϱ�
