//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main() {
    int n;
    int is_prime = 1;  
    int i = 2;         

    
    printf("请输入一个小于50的正整数作为密钥：");
    scanf("%d", &n);

    
    if (n <= 0 || n >= 50) {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }

    
    if (n == 1) {
        is_prime = 0;
    } else {
        
        while (i < n) {
            if (n % i == 0) { 
                is_prime = 0;
                break;  
            }
            i++;  
        }
    }

    
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}
