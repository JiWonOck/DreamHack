// gcc -o logical logical.c 
#include <stdio.h>
int withdraw(int balance, int money) {
    return balance - money;
}
int main() {
    int balance = 10000;
    int amount = 0;
    int result = 0;
    printf("Your balance: %d\n\n", balance);
    printf("Please enter the amount to withdraw: ");
    scanf("%d", &amount);
    result = withdraw(balance, amount);
    printf("Check your balance: %d", result);
    return 0;
}

//논리적 오류 발생함 (음수를 입력하면!) 
