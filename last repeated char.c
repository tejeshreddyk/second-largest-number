#include <stdio.h>

int main(void) {
    int n;
    char a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d characters (space separated): ", n);
    for (int i = 0; i < n; i++) scanf(" %c", &a[i]);

    for (int i = n - 1; i >= 0; i--)
        for (int j = 0; j < i; j++)
            if (a[i] == a[j]) {
                printf("Last repeated character: %c\n", a[i]);
                return 0;
            }
    printf("No repeated character\n");
    return 0;
}
