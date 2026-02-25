#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "IntQueue.h"

int main(void) {
	IntQueue que;
	int n, temp;

	printf("카드 개수 N을 입력하세요 : ");
	if (scanf("%d", &n) != 1) return -1;

	// 1. 큐 초기화
	if (Initialize(&que, n) == -1) {
		puts("큐 생성 실패!");
		return -1;
	}

	// 2. 1부터  N까지 카드를 큐에 순서대로 인큐(Enque)
	for (int i = 1; i <= n; i++) {
		Enque(&que, i);
	}

	//3. 카드가 1장 남을 때까지 규칙 반복
	while (Size(&que) > 1) {
		// (1) 맨위 카드 1장을 버린다
		Deque(&que, &temp);


		// (2) 그 다음 맨 위 카드를 꺼내서(디큐) 맨 아래로 다시 넣는다(인큐)
		if (Size(&que) > 0) {	// 버린후 카드가 남아있을 떄만 수행
			Deque(&que, &temp);
			Enque(&que, temp);
		}

	}
	// 4. 마지막 남은 카드 번호 출력
	if (Deque(&que, &temp) == 0) {
		printf("마지막 카드 번호: %d\n", temp);
	}

	// 메모리 해체
	Terminate(&que);

	return 0;
}