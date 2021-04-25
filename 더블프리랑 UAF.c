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

//Double-free : 이미 해제된 메모리를 다시 한 번 메모리 해제시키는 취약점 
// Use-After-Free(UAF) : 해제된 메모리에 접근해서 값을 쓸 수 있는 취약점
