#include <stdio.h>
int main() {
    int x = 10;
    int *ptr;

    // TODO: เขียนคำสั่งให้ ptr ชี้ไปที่ x
    ptr = &x;

    // TODO: แสดงค่าของ x ก่อนเปลี่ยน
    printf("Before: x = %d\n", x);

    // TODO: ใช้ pointer เปลี่ยนค่า x ให้เป็น 20
    *ptr = 20;

    // TODO: แสดงค่าของ x หลังเปลี่ยน
    printf("After : x = %d\n", x);

    return 0;
}