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

//������ ��� ��� Ȥ�� �ݺ����� Ƚ�� ��� �� < ��� <=�� ���ų�
//0���� �����ϴ� �ε����� ������� ���� �� �߻� 
//�������ϸ� ����
 
