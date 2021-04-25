// df-1.c
#include <stdio.h>
#include <malloc.h>
int main(void) {
    char* a = (char *)malloc(100);
    char *b = (char *)malloc(100);
    memset(a, 0, 100);
    strcpy(a, "Hello World!");
    
    memset(b, 0, 100);
    strcpy(b, "Hello Pwnable!");
    
    printf("%s\n", a);
    printf("%s\n", b);
    
    free(a);
    free(b);
    
    free(a);
}

//Double-free : �̹� ������ �޸𸮸� �ٽ� �� �� �޸� ������Ű�� ����� 
// Use-After-Free(UAF) : ������ �޸𸮿� �����ؼ� ���� �� �� �ִ� �����
