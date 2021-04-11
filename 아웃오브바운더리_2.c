// oob-2.c
#include <stdio.h>
int main(void) {
    int idx;
    int buf[10];
    int win;
    
    printf("Which index? ");
    scanf("%d", &idx);
    
    idx = idx % 10;
    printf("Value: ");
    scanf("%d", &buf[idx]);
    printf("idx: %d, value: %d\n", idx, buf[idx]);
    if(win == 31337){
        printf("Theori{-----------redacted---------}");
    }
}

//oob-1과 다르게 idx%10 이용. but 음수를 입력하면 무용지물 
