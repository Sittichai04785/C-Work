#include <stdio.h>
int main() {
    int score ;
    int ss ;

    printf("ผู้ใช้กรอกค่าคะแนนดิบเข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming:");
    ss = scanf("%d",&score) ;

    if (ss != 1){
        printf("please enter number only.");
        return 1 ;
    }//end if

    switch (score)
    {
    case 80 ... 100 :
        printf("คะแนนเกรดของคุณคือ A");
        break;
    case 75 ... 79 :
        printf("คะแนนเกรดของคุณคือ C+");
        break;
    case 70 ... 74 :
        printf("คะแนนเกรดของคุณคือ C");
        break;
    case 65 ... 69 :
        printf("คะแนนเกรดของคุณคือ D+");
        break;
    case 60 ... 64 :
        printf("คะแนนเกรดของคุณคือ D");
        break;
    case 55 ... 59 :
        printf("คะแนนเกรดของคุณคือ F");
        break;
    case 50 ... 54 :
        printf("คะแนนเกรดของคุณคือ A");
        break;
    case 0 ... 49 :
        printf("คะแนนเกรดของคุณคือ A");
        break;
    default:
        printf("ผิดพลาด");
        break;
    }
    return 0;
}
