//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main(){
    int arr[5];
    int *p;
    for(int i = 0;i < 5;i++){
        scanf("%d", &arr[i]);
    }
    p = arr;
    for(int i = 0;i < 5;i++){
        *(p + i ) *= 2;
    }
    for(int i = 0;i < 5;i++){
        if(i == 4){
            printf("%d\n",arr[i] );
        }else {
            printf("%d ", arr[i]);

        }
    }
    return 0;
}
