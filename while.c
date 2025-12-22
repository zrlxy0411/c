#include <stdio.h>
int main(){
    int x ,  n;
    scanf("%d",&x);
    while(x>=0){
        n++;
        x/=10;
    }                            //当（）内条件满足时，则会进行{}内的循环，只有当（）内条件不满足时，进行下一个语句，即跳出循环。
    printf("%d\n",n);
    return 0;
}