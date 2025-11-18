//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
void swap(int *ptr_arr,int len){
    for(int i = len-1;i>0;i--){
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;
}
int main(){
    int arr[5];
    int len = 5;
    for(int i = 0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    swap(arr,len);
    for(int i = 0;i<len;i++){
        if(i == len -1){
            printf("%d\n",arr[i]);
        }else{
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
