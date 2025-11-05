//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int one(int a,int b){
    int result = 1;
    for(int i=0;i<b;i++){
        result *=a;
    }
    return result;
}
    int main(){
        int sum=0;
        for(int num=1;num<=5;num++){
            sum += one(num,2);
        }

        printf("%d",sum);
        return 0;
    }       
