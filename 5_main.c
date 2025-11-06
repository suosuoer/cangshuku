//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main(){
    int sum = one(1,100,1);
    printf("%d",sum);
    return 0;
}



int one(int a1,int an,int step){
    int n = (an - a1)/step + 1;
    return (a1+an) * n /2;  
}
