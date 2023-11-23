// 아직 푸는 중
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
       
    char* answer = (char*)malloc(strlen(my_string)+1);
    
    for(int i=0; i<s; i++){
        answer[i] = my_string[i];
    }
    
    for (int j=0; j<=(strlen(overwrite_string));j++){
        answer[j+s] = overwrite_string[j];
        printf("%c", answer[j]);
    }
  
    //printf("%s", answer);
    
    return answer;
}
