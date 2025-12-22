#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>           //这两个#include是为了srand和rand使用
 int main(){
    srand(time(0));          //为了让每次运行数字不同
    int a =0;
    int count =0;
    int number = rand()%100 +1 ;   //rand会产生随机数，%100是取余，及最后数一定小于100
    printf("我已随机生成一个1-100的数,请你做出猜测\n");
    do {
        scanf("%d",&a);
    count ++;
    if(a>number){
        printf("你猜的数字更大\n");
    }else if(a<number){
        printf("你猜的数字更小\n");
    }
    else {
        printf("猜对了\n");
        printf("你一共猜了%d次",count);
    }
}
      while(a != number);
    return 0;
 }