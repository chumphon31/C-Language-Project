/*
if(เงื่อนไข){
    คำสั่ง...

}else if(เงื่อนไข){
    คำสั่ง...

}else if(เงื่อนไข){
    คำสั่ง...

}else{
    คำสั่ง...
}


*/

#include<stdio.h>
int main(){

    int level;

    printf("----------------------------------\n");
    printf("\tWelcome to Student\n");
    printf("----------------------------------\n");

    printf("Enter Your Level : ");
    scanf("%d", &level);
    printf("----------------------------------\n");

    if(level == 1){
    printf("Hello, You are freshman\n");
    
    }else if(level == 2){
    printf("Hello, You are sophomore\n");
    
    }else if(level == 3){
    printf("Hello, You are junior\n");
    
    }else if(level == 4){
    printf("Hello, You are senior\n");
    
    }else{
    printf("Hello, T_T\n");
    }

    printf("----------------------------------\n");







    

    return 0;
}

int showhello(){
    int score = 25; // local เเต่ใช้ได้ ทั้งหมด ใน function นี้
    {
        int info; // อยู่ใน block ไม่สามารถนำไปใช้กับ  block อื่นได้
        score = 50; info = 100;
    }

}



