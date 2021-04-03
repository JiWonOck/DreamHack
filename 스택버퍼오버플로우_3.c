// stack-3.c
#include <stdio.h>
#include <unistd.h>
int main(void) {
    char win[4];
    int size;
    char buf[24];
    
    scanf("%d", &size);
    read(0, buf, size);
    if (!strncmp(win, "ABCD", 4)){
        printf("Theori{-----------redacted---------}");
    }
}

/*Size : 32
Data : 2322222222222222222222222222ABCD

Theori{d505e3a5558caa934f0dc61346226639}*/
