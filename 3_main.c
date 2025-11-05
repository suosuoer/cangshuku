//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main(){
    int arr[10];
    int i,j,one;

    printf("请输入10个整数:");
    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }


    for(i = 0; i<9; i++){
        for(j = 0; j < 9 - i; j++){
            if(arr[j] > arr[j+1]){
                one = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = one;
            }
        }
    }

    printf("排序后(从小到大):");
    for(i = 0; i < 10; i++){
        printf("%d", arr[i]);
        if (i<9)printf(" ");
    }

    printf("\n");

    return 0;
}
