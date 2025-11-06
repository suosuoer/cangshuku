//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int sum(int arr[], int len){
    int s = 0;
    int i;
    for (i = 0; i<len;i++){
        s+= arr[i];
    }
    return s;
}

int product(int arr[], int len){
    int p = 1;
    int i;
    for(i = 0;i<len;i++){
        p *=arr[i];
    }
    return p;
}



int main(){
    int arr[5];
    int i;
    for(i = 0; i<5;i++){
        scanf("%d",&arr[i]);
    }


    int s = sum(arr,5);
    int p = product(arr,5);

    printf("%d %d",s,p);
    return 0;
}
