// oob-1.c
#include <stdio.h>
int main(void) {
    int win;
    int idx;
    int buf[10];
    
    printf("Which index? ");
    scanf("%d", &idx);
    printf("Value: ");
    scanf("%d", &buf[idx]);
    printf("idx: %d, value: %d\n", idx, buf[idx]);
    if(win == 31337){
        printf("Theori{-----------redacted---------}");
    }
}

//OOB(Out-of Boundary)�� ������ ���� ������ ����� �ε����� ������ �� �߻��ϴ� ����� 
//index=11   idx�ڿ� �ٷ� win�̶� idx �ڿ��� �ٷ� �����Ϸ��� buf[11] �̸� 10��ġ�� ��  
//value= 31337

