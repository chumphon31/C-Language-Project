/*  
no parameter has return
เมื่อใดก็ ตาม ที่มี return เเละ มี ค่าต่อท้าย จะไม่ใช่ void
*/

#include <stdio.h>
double multiply2Nuber(int, double);

int sun2Number(int num1, int num2) {
    return num1 + num2;
}

char* showhello(){
    return "Hello";
}


int main() {
    int data01;
    data01 = sun2Number(10, 20);
    printf("100+200 = %d\n", sun2Number(100, 200));
    printf("100*200 = %.4lf\n", multiply2Nuber(100, 3));
    printf("%s Sombat\n", showhello());
    printf("%d\n", data01+ data01+data01);

    return 0;
}

double multiply2Nuber(int n1, double n2){
    return n1 * n2;
}