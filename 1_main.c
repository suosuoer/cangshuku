//202510603309
//1482992616@qq.com
//文嘉颖
include <stdio.h> 

int main()
{
     float celsius, fashrenheit;

     
     printf("请输入摄氏温度：");
     scanf("%f", &celsius);

     fashrenheit=celsius*9/5+32;

     printf("转换后的华氏温度为: %.1f\n", fashrenheit);


     return 0;
}


