//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
#include <stdio.h>
int main(){
    int *ptr = (int *)malloc(5 * sizeof(int));
    for(int i = 0; i < 5;i++){
        scanf("%d", ptr + i);
    }
    for(int i = 0; i < 5;i++){
        if(i ==4){
            printf("%d\n", *(ptr + i));
        }else{
            printf("%d ", *(ptr + i));
        }
    }

    free(ptr);
    ptr = NULL;
    return 0;
}
