#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    //int* answer = (int*)malloc(sizeof(1)); => 최초 풀이
    int* answer = (int*)malloc(sizeof(money)); // => 2번째 풀이
    // int* answer = (int*)malloc(2 * sizeof(int)); => 다른 사람들 풀이
    answer[0] = money / 5500;
    answer[1] = money % 5500;
    return answer;
}

int* answer = (int*)malloc(sizeof(money)); 와 int* answer = (int*)malloc(2 * sizeof(int)); 사이에는 중요한 차이가 존재

1. `sizeof(money)`를 사용한 경우:
   - `sizeof(money)`는 변수 `money`의 크기를 바이트 단위로 반환합니다. 그러나 `money`는 `int`형 변수이기 때문에 이 값은 보통 4바이트(32비트 시스템) 또는 8바이트(64비트 시스템)일 것입니다.
   - 따라서 `malloc(sizeof(money))`는 `money` 변수의 크기만큼 메모리를 할당합니다. 즉, 4바이트 또는 8바이트만큼의 메모리가 할당됩니다.
   - 이 경우, 함수를 호출할 때마다 인자로 전달되는 값에 따라 할당되는 메모리의 크기가 달라집니다.

2. `2 * sizeof(int)`를 사용한 경우:
   - `sizeof(int)`는 `int`형의 크기를 바이트 단위로 반환합니다. 일반적으로 `int`형은 4바이트 또는 8바이트입니다.
   - 따라서 `2*sizeof(int)`는 `int`형 변수 2개의 크기를 바이트 단위로 반환합니다. 일반적으로 8바이트 또는 16바이트가 됩니다.
   - 이 경우, 항상 2개의 `int`형 변수를 저장할 수 있는 메모리 블록이 할당됩니다. 호출할 때마다 메모리의 크기는 항상 동일합니다.

따라서 두 가지 방식 중 어떤 것을 선택할지는 상황에 따라 다를 수 있습니다. 
만약 항상 두 개의 `int`형 변수를 저장할 수 있는 메모리를 할당하고 싶다면 `int* answer = (int*)malloc(2 * sizeof(int));`를 사용하는 것이 좋습니다. 
하지만 인자로 전달되는 값에 따라 메모리 크기가 달라져도 괜찮다면 `sizeof(money)`를 사용할 수 있습니다.
