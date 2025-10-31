//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main()
{
    int arr[5];
    int i = 0; 
    int num;
    while (i < 5){
       scanf("%d", &num);
       if(num % 2 == 0){
        arr[i] = num;
        i++;
        
       }
    }

    int j = 0;
    while(j < 5){
        printf("%d", arr[j]);
        if(j < 4){
            printf(" ");
            
        }
        j++;
    }

    return 0;
}
