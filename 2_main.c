//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main(void)
{
    int num = 100;
    int count = 0;

    /* 遍历所有三位数，判断是否为水仙花数（每位的立方和等于自身） */
    while (num <= 999) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;
        int sum = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;

        if (sum == num) {
            if (count == 0)
                printf("%d", num);
            else
                printf(" %d", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}

 
