#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // calloc, free를 위해 필요

// 학생 정보를 담을 구조체 정의
typedef struct {
    char name[20]; // 학생 이름 (최대 20자)
    int score;     // 학생 점수
} Student;

int main(void) {
    int n;

    puts("최고 점수 학생 찾기");
    printf("학생 수 > ");
    if (scanf("%d", &n) != 1) return -1;

    // 1. 학생 수만큼 구조체 
    Student* stds = (Student*)calloc(n, sizeof(Student));
    if (stds == NULL) return -1; // 메모리 할당 실패 시 종료

    // 최고 점수와 해당 학생의 인덱스를 저장할 변수
    int max_score = -1;
    int max_index = 0;

    // 2. 학생 정보 입력 및 최고 점수 비교
    for (int i = 0; i < n; i++) {
        printf("%d번째 학생 이름과 점수 입력 > ", i + 1);
        scanf("%s %d", stds[i].name, &stds[i].score);

        if (stds[i].score > max_score) {
            max_score = stds[i].score;
            max_index = i;
        }
    }

    // 3. 결과 출력
    printf("\n[결과 출력]\n");
    printf("%s %d\n", stds[max_index].name, stds[max_index].score);

    // 4. 메모리 해제
    free(stds);

    return 0;
}