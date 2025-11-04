//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main(){
    int arr[3][3];
    int i = 0, j;
    printf("请输入3*3矩阵:\n");
    while(i<3){
        j = 0;
        while(j<3){
            scanf("%d",&arr[i][j]);
            j++;
        }
        i++;
    }

    printf("输出的3*3矩阵为:\n");
    i = 0;
    while(i<3){
        j = 0;
        while(j<3){
            printf("%d",arr[i][j]);
            if(i<3){
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}


