#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int number = 0;
    int count = 0;
    printf("请输入你的值\n");
    do{ scanf ("%d",&a);
        if(a != -1){       //注意if判断条件和if在程序中的位置
        number += a;
        count ++;
    }
    }
    while(a != -1);
    printf("你所求的平均值是：%f",(float)number/count);
    return 0;

    
}
