/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <math.h>

// ฟังก์ชันสำหรับตรวจสอบว่าเป็น "จำนวนอาร์มสตรอง" หรือไม่
int isArmstrong(int num) {
    int originalNum, remainder, sum = 0 ;
    originalNum = num ;

    while ( originalNum != 0 ) {
        remainder = originalNum % 10 ;
        sum += pow( remainder, 3 ) ;
        originalNum /= 10 ;
    }//end while

    if ( sum == num ) {
        return 1 ;  // เป็น "จำนวนอาร์มสตรอง"
    } else {
        return 0 ;  // ไม่เป็น "จำนวนอาร์มสตรอง"
    }//end if
}

int main() {
    int num;

    // Input
    printf( "Enter Number: " ) ;
    scanf( "%d", &num ) ;

    // เรียกใช้ฟังก์ชันและตรวจสอบผลลัพธ์
    if ( isArmstrong( num ) ) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    }//end if

    return 0 ;
}//end function
