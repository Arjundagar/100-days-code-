#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum[10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<r; i++) {
        sum[i] = 0;
        for(j=0; j<c; j++)
            sum[i] += a[i][j];
    }

    printf("Sum of each row:\n");
    for(i=0; i<r; i++)
        printf("Row %d = %d\n", i+1, sum[i]);

    return 0;
}
