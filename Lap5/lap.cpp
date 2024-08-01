#include <stdio.h>
int main() {
    int score ;
    char ss;
    printf("ผู้ใช้กรอกค่าคะแนนดิบเข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming:");
    if (scanf("%d%c",&score,&ss) != 2 || ss != '\n') {
        printf("please enter number only.");
    } else if ( score >=0 && score < 50 ) {
        printf("คะแนนเกรดของคุณคือ F");
    } else if(score >= 50 && score <= 54 ){
        printf("คะแนนเกรดของคุณคือ D");
    } else if(score >= 55 && score <= 59 ){
        printf("คะแนนเกรดของคุณคือ D+");
    } else if(score >= 60 && score <= 64 ){
        printf("คะแนนเกรดของคุณคือ C");
    } else if(score >= 65 && score <= 69 ){
        printf("คะแนนเกรดของคุณคือ C+");
    } else if(score >= 70 && score <= 74 ){
        printf("คะแนนเกรดของคุณคือ B");
    } else if(score >= 75 && score <= 79 ){
        printf("คะแนนเกรดของคุณคือ B+");
    } else if(score >= 80 && score <= 100){
        printf("คะแนนเกรดของคุณคือ A");
    }
    return 0 ;

}//end main function