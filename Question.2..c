#include <stdio.h>

int main() {
    int a[10], b[10];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection: ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j])
                printf("%d ", a[i]);
        }
    }

    return 0;
}

