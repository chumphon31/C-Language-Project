/*
การพิสูจน์ หลายครั้ง  Switch Expression
    switch(เงื่อนไข){
        case 1:
            คำสั่ง....
            break; // ไม่มีก็ ได้ เเต่ทำไป เรื่อย จนกว่าจะเจอ
        case 2:
            คำสั่ง....
            break;
        case 3:
            คำสั่ง....
            break;
        default: // ไม่มีก็ได้ 
            คำสั่ง...
            break;
    }

    ** value เป็นได้ เเค่ int และ char  เท่านั้น  integer // character
    ** ใช้เปรียเทียบ   == , !=  เท่านั้น
*/


#include <stdio.h>
int main(){
    int level;

    printf("----------------------------------\n");
    printf("\tWelcome to Student\n");
    printf("----------------------------------\n");

    printf("Enter Your Level : ");
    scanf("%d", &level);
    printf("----------------------------------\n");
   
    
    switch (level){
    case 1:
        printf("hello ,you Freshman\n");
        break;
    case 2:
        printf("hello ,you Sophomore\n");
        break;
    case 3:
        printf("hello ,you Junior\n");
        break;
    case 4:
        printf("hello ,you Senior\n"); 
        break;
    case 5:
        printf("Hello, T_T\n");
        break;
    default:
        break;
    }

    printf("----------------------------------\n");
    
        
return 0;

}