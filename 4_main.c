//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
void swap(int *arr,int length){
    for(int i = 0;i < length;i++){
    *(arr + i)+= 1;
}
    }
int main(){
    int arr[5];
    int length=5;
    for(int i = 0;i <length;i++){
        scanf("%d", &arr[i]);
    }

    swap(arr,length);
    for(int i = 0;i < length;i++){
        if(i == length-1){
            printf("%d\n",arr[i]);
        }else{
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
