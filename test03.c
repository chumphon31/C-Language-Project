
#include <stdio.h> // หรือ "stdio.h" คือ Library สําหรับการเเสดงผลข้อมูล และ รับค่าข้อมูล
int main(){
    // python ====>>> name = input("Enter your name : ")

    // ป้อนชื่อ ป้อนอายุ
    // declare variable
    
    char name[50];
    int age;  // long int มากกว่า 10 ล้านตัวอักษร

    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Hello.....%s\n", name);
    printf("Your age is %d\n", age);
    return 0;


}