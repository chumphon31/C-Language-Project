/*
break => ใช้เพื่อออกจาก loop ตามเงื่อนไขที่เราต้องการ
continue => ใช้เพื่อข้ามการทํางานใน loop ตามเงื่อนไขที่เราต้องการ

*/ 
#include<stdio.h>

int main(){
int x;
for(x = 1; x <= 5; x++){
    if (x == 3)
     break;
    printf("%d - SAU\n", x); 
    }
 
printf("\n\n+++++++++++++++++++++++++++++++\n\n");

for(x = 1; x <= 10; x++){
    if (x == 3)
     continue;
    printf("%d - SAU\n", x); 
    }

printf("\n\n+++++++++++++++++++++++++++++++\n\n");


printf("%d", x); // 
    

return 0;

}