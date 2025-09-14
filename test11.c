/*  
function มี 4 ประเภท คือ  
- no parameter no return
- have prameter has return
- no parameter has return
- have parameter has return


*/
// no parameter no return // ถ้า function อยู่หลัง main ให้ Declare ด้วย Function ก่อน
#include<stdio.h>


void showhi();

void showhello(){
    showhi();
    printf("Hello\n");
}

int main(){
    printf("wow wow \n");
    showhello();
    showhi();
    return 0;
}

void showhi(){
    printf("Hi.....\n");
}