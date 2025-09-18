#include <stdio.h>
#include <string.h>  // สำหรับใช้ฟังก์ชัน strcmp() และ strlen()

int main() {
    char customer1[100], customer2[100];  // ตัวแปรเก็บชื่อของลูกค้า111111 2 คน
    int length1, length2;                  // ตัวแปรเก็บความยาวของชื่อแต่ละคน

    // รับชื่อของลูกค้าคนที่ 1
    printf("Enter name of customer 1: ");
    fgets(customer1, sizeof(customer1), stdin);
    customer1[strcspn(customer1, "\n")] = '\0'; // ตัด newline ที่ fgets อ่านมาด้วย

    // รับชื่อของลูกค้าคนที่ 2
    printf("Enter name of customer 2: ");
    fgets(customer2, sizeof(customer2), stdin);
    customer2[strcspn(customer2, "\n")] = '\0'; // ตัด newline เช่นกัน

    // หาความยาวของชื่อแต่ละคน
    length1 = strlen(customer1);
    length2 = strlen(customer2);

    // เช็คว่าชื่อเหมือนกันหรือไม่
    if (strcmp(customer1, customer2) == 0) {
        // กรณีที่ชื่อเหมือนกัน
        printf("Both of your names are the same, which is %s.\n", customer1);
        printf("The length of the name is %d characters.\n", length1);
    } else {
        // กรณีที่ชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%d characters)\n", customer1, length1);
        printf("Customer 2: %s (%d characters)\n", customer2, length2);
    }

    return 0;
}