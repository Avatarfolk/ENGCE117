#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("[%d] Hello world\n", i);
    }

    return 0;
}
