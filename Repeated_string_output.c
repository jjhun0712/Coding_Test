#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int b=1; b<=a; b++)
    {
        printf("%s", s1);
    }
    return 0;
}
