#include <stdio.h>
int main(){
    int x, n;
    scanf("%d",&x);
     do{
    x/=10;
    n++;
    }while (x>0);
    printf("%d\n",n);
    return 0;
}