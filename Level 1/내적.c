// 3점 받음... 그런데 다른 사람의 풀이를 봐도 비슷함... 뭐가 문제인가...
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;

    for (int i = 0; i < a_len; i++) {
        answer += a[i] * b[i];
    }

    return answer;
}
