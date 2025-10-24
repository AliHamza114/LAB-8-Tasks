#include <stdio.h>

int main() {
    float temp[7][3];
    int i, j;
    float sum;

    for(i = 0; i < 7; i++) {
        printf("Enter 3 temps for day %d (Morning Afternoon Night): ", i + 1);
        for(j = 0; j < 3; j++)
            scanf("%f", &temp[i][j]);
    }

    printf("\nDay\tMorning\tAfternoon\tNight\n");
    for(i = 0; i < 7; i++) {
        printf("%d\t", i + 1);
        for(j = 0; j < 3; j++)
            printf("%.1f\t\t", temp[i][j]);
        printf("\n");
    }

    printf("\nAverage temperature for each day:\n");
    for(i = 0; i < 7; i++) {
        sum = 0;
        for(j = 0; j < 3; j++)
            sum += temp[i][j];
        printf("Day %d = %.2f\n", i + 1, sum / 3);
    }

    return 0;
}

