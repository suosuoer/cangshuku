//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n", a, *p);
    return 0;
}
