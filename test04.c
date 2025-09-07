#include<stdio.h>
// สร้างโปรเเกรม คำนวนจำนวนเงิน ที่ต้องการหารกัน
// 
int main(){

double money, money_share;
int person;

printf("------------------------------\n");
printf("\tMoney Share\n");
printf("------------------------------\n");

printf("Input Money : ");
scanf("%lf", &money);
printf("Input Person : ");
scanf("%d", &person);
money_share = money / person;
printf("------------------------------\n");
printf("Money Share : %.2lf Bath\n", money_share);
printf("------------------------------\n");






    return 0;
}