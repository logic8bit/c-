#include<stdio.h>
int main() {
    int accountId1 = 1234;
    double balance1 = 1234.56;

    int accountId2 = 5678;
    double balance2 = 8765.43;
    printf("Account ID:%08d, Name:%s,Balance: $%.2f\n", accountId1,"赵一",balance1);
    printf("Account ID:%08d, Name:%s,Balance: $%.2f", accountId2, "李天一", balance2);
    return 0;
}