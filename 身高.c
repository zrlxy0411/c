#include <stdio.h>
int main(){
   char sex, sports, diet;
   double faheight , moheight, height;
   scanf("%c %lf %lf %c %c ",&sex, &faheight,&moheight,&sports,&diet);
   if (sex == 'm'){
    height = (faheight + moheight)* 0.54;
   }else{
    height = (faheight * 0.9232 + moheight) / 2;
   };
   if (sports == 'y'){
    height = height * 1.02;
   };
   if(diet == 'y'){
    height = height * 1.015;
   }
   printf("%.2f\n",height);
   return 0;

} 