#include <stdio.h>

int main() {
    int n; // จำนวนของนักเรียน
    float score, sum = 0, average;

    // รับจำนวนของนักเรียน
    printf("Enter number of students: ");
    scanf("%d", &n);

    // รับคะแนนของนักเรียนแต่ละคน
    for (int i = 1; i <= n; i++) {
        printf("Enter score %d: ", i);
        scanf("%f", &score);
        sum += score; // หาผลรวมคะแนน
    }

    // คำนวณค่าเฉลี่ย
    average = sum / n;

    // แสดงผล
    printf("Number of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}
