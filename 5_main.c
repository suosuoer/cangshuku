//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main()
{
    int arr[5];
    int i = 0;
    while(i < 4){
        scanf("%d", &arr[i]);
        i++;
    }
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];
    i = 0;
    while(i < 5){
        printf("%d", arr[i]);
        if(i<4){
            printf(" ");
        }
        i++;
    }



    return 0;
}
