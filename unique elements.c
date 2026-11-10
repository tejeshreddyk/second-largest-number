#include <stdio.h>

int main(void) {
    int n, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Unique elements: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == a[j]) count++;
        if (count == 1) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
