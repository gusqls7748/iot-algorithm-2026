//1. 공백 없는 문자열 s가 있습니다. 스택을 사용하여 문자열을 뒤집어 출력하는 소스를 작성하세요. 힌트) 한 글자씩 스택에...
//예) hello -> olleh

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"


int main() {
	char s[100];	//문자열을 입력받은 배열
	IntStack stack;	// 스택 구조체 변수
	int temp;		// 스택에서 꺼낸 값을 잠시 저장할 변수
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", s);	// 공백없는 문자열 입력

	int len = (int)strlen(s);

	// 1. 스택 초기화
	if (Initialize(&stack, len) == -1) {
		printf("스택 생성에 실패했습니다.\n");
		return 1;
	}

	// 2. 한 글자씩 스택에 푸시
	for (int i = 0; i < len; i++) {
		Push(&stack, s[i]);
	}

	printf("뒤집힌 결과: ");

	//3 스택이 빌 때까지 POP하여 출력
	while (!IsEmpty(&stack)) {
		Pop(&stack, &temp); // 스택 맨 위의 값을 temp에 저장
		printf("%c", (char)temp); // 정수형을 문자로 형변환하여 출력
	}
	printf("\n");

	//4. 사용한 스택 메모리 해체
	Terminate(&stack);

	return 0;

}

