//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main() {
    int arr[3][3];  
    int i, j;

    
    for (i = 0; i < 3; i++) {  
        for (j = 0; j < 3; j++) { 
            scanf("%d", &arr[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);  
        }
        printf("\n");  
    }

    return 0;
}














