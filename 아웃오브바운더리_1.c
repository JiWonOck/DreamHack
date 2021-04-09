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

//OOB(Out-of Boundary)는 버퍼의 길이 범위를 벗어나는 인덱스에 접근할 때 발생하는 취약점 
//index=11   idx뒤에 바로 win이라서 idx 뒤에서 바로 시작하려면 buf[11] 이면 10위치가 됨  
//value= 31337

