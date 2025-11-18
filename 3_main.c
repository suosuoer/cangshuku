//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main()
{
    int x , y;
    scanf("%d %d",&x ,&y);
    swap(&x, &y);
    printf("%d %d\n",x,y);
    return 0;
}
void swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
