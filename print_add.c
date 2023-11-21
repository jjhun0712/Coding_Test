#include <stdio.h>

int main(void) {
    int a=0;
    int b=0;
    scanf("%d %d", &a, &b);
    if (a <= 100 && b <= 100) {
         printf("%d + %d = %d", a, b, a + b);
    }
    return 0;
}
