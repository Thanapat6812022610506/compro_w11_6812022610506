#include <stdio.h>

// TODO: เขียนฟังก์ชัน swap ที่รับ int *a, int *b แล้วสลับค่า
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 2, b = 5;

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ swap
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;
}