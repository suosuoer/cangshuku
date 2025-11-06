//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
void one(int arr[], int len){
    int i,two;
    
    for (i = 0; i<len/2;i++){
        two= arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = two;
    }
    
}




int main(){
    int arr[5];
    int i;
    for(i = 0; i<5;i++){
        scanf("%d",&arr[i]);
    }


   one (arr,5);
   for(i = 0;i < 5;i++){
    printf("%d",arr[i]);
    if(i<4){
        printf(" ");
    }
   }
    return 0;
}
