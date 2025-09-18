#include <stdio.h>

int main() {
    // ตัวแปรเพื่อเก็บคะแนนของนักเรียน
    float math[3], physics[3], chemistry[3];
    float avgMath, avgPhysics, avgChemistry;
    int i;

    // รับค่าคะแนนจากผู้ใช้
    for(i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i+1);
        printf("Math: ");
        scanf("%f", &math[i]);
        printf("Physics: ");
        scanf("%f", &physics[i]);
        printf("Chemistry: ");
        scanf("%f", &chemistry[i]);
        printf("\n");
    }

    // แสดงตารางคะแนน
    printf("Score Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for(i = 0; i < 3; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i+1, math[i], physics[i], chemistry[i]);
    }

    // คำนวณคะแนนเฉลี่ยของแต่ละวิชา
    avgMath = 0;
    avgPhysics = 0;
    avgChemistry = 0;
    for(i = 0; i < 3; i++) {
        avgMath += math[i];
        avgPhysics += physics[i];
        avgChemistry += chemistry[i];
    }

    // คำนวณค่าเฉลี่ย
    avgMath /= 3;
    avgPhysics /= 3;
    avgChemistry /= 3;

    // แสดงคะแนนเฉลี่ย
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", avgMath);
    printf("Physics: %.2f\n", avgPhysics);
    printf("Chemistry: %.2f\n", avgChemistry);

    return 0;
}
