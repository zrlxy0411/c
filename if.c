#include <stdio.h>
int main()
{
    int score = 33;
    if(score>=90){
        printf("优秀");}
    else if(score>=75){
            printf("良好");
        }else if(score>=60){
            printf("及格");
        }else printf("不及格");
    
    return 0;
    
    
}