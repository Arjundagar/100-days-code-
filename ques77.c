#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Matrix must be square.");
        return 0;
    }

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<i; j++)
            if(a[i][i] == a[j][j])
                flag = 0;

    if(flag)
        printf("Diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}
