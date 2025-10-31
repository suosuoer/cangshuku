//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main() {
    int num = 100;  
    int first = 1;  

    
    while (num <= 999) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        int cube_sum = hundreds * hundreds * hundreds + 
                       tens * tens * tens + 
                       units * units * units;

        if (cube_sum == num) {
            if (first) {
                printf("%d", num);
                first = 0;  
            } else {
                printf(" %d", num);
            }
        }

        num++;  
    }

    printf("\n");  
    return 0;
}
