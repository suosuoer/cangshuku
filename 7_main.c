//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main()
{
     int arr[5];
     int i;
     printf("请输入当前记录的前四位学号：");
     scanf("%d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3]);
     i = 4;
     while(i > 0){
        arr[i] = arr[i - 1];
        i--;
     }
     arr[0] = 0;
     i = 0;
     while(i < 5){
        printf("%d",arr[i]);
        if(i < 4){
            printf(" ");
        }
        i++;
     }
     return 0;
}
