//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
void swap(int *arr,int n){
    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - 1 - i;j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main(){
    int arr[10];
    int n = 10;
    printf("请输入10个整数");
    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }
    swap(arr,n);
    printf("排序后的数组：");
    for(int i = 0;i < n;i++){
        if(i == n - 1){
            printf("%d\n",arr[i]);
        }else{
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
