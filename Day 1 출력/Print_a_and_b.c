#include <stdio.h>

int main(void) {
    int a=0;
    int b=0;
    scanf("%d %d", &a, &b);
    if ((a >= -100000 && a <= 100000) && (b >= -100000 && b <= 100000)){ 
        printf("a = %d\nb = %d\n", a,b);
    }
    return 0;
}
