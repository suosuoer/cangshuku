//202510603309
//1482992616@qq.com
//文嘉颖
#include <stdio.h>

int main() {
    int arr[3][3];
    int one[3][3];
    int i = 0, j;


    while(i < 3) {
        j = 0;
        while(j < 3){
            scanf("%d", &arr[i][j]);
            j++;

        }
        i++;
    }



    i = 0;
    while(i<3){
        j = 0;
        while(j<3){
            one[j][i] = arr[i][j];
            j++;
        }
        i++;
    }
    i = 0 ;
    while(i<3){
        j = 0;
        while(j<3){
        printf("%d", one[i][j]);
        if(j<2) printf(" ");
        
        j++;
    }
    printf("\n");
    i++;
}
return 0;
}
