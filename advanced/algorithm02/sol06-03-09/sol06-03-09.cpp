// sol06-03-09.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string solution(int decimal) {
    if (decimal == 0) return "0"; // 입력값이 0이면 바로 처리


    stack<int> stack;
    while (decimal > 0) {
        stack.push(decimal % 2);
        decimal /= 2;
    }

    string binary = "";
    while (!stack.empty()) {
        binary += to_string(stack.top());
        stack.pop();
    }
    return binary;
}

    // 링커 에러 해결을 위한 main 함수 추가
    int main() {
        int test_value = 10;
        cout << test_value << "의 이진수 변환: " << solution(test_value) << endl; // 출력: 1010
        return 0;
    }
