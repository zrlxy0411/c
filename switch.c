#include <stdio.h>
int main(){
    int type;
    scanf("%d", &type);
    switch(type){
    case 1:
        printf("a");
        break;
    case  2:
         printf("b");
         break;
    default :
         printf("no");
        break;
    }
    return 0;
}