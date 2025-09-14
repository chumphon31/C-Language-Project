// การใช้ standard bult-in function ใน C ต้องรู้ว่า อยู่ ใน Library file (.h) ไหน #include
// การเเสดงค่า ต้องใช้ Printf() ;
// การรับค่า ต้องใช้ Scanf();
// ถ้าเป้น ' ใน C คืออักษร ตัวเดียว (character)
// ถ้าเป็น " คือข้อความ ตัวอักษร ตั้งเเต่ 0 ขึ้นไป " String

#include <stdio.h>

int main() {
    printf("Hello\n");
    printf("BBBB %s %d ", "CCC" ,100);  // String = %s  Int = %d  Float = %f  fload  ละเอียดมาก  = %lf
    printf("XYZ %.2f ^_^ %.2lf " , 150.45 , 158.44444444876 );
    printf("ABCD %c %s", 'B' , "");


    return 0;
}