/*

have parameter no return

*/

#include <stdio.h>

void avgTreenumber(int,int,int);


void showSumNumber(int num1, int num2) {
   int sum = num1 + num2;
    printf(" %d + %d = %d\n", num1, num2, sum);
    

}



int main() {
    printf("wow wow\n");
    avgTreenumber(10,20,30);
    showSumNumber(10,20);
return 0;

}
void avgTreenumber(int n1, int n2, int n3) {
    printf("Average number of %d, %d, %d = %.2f \n", n1, n2, n3,(n1+n2+n3)/3.0);

}