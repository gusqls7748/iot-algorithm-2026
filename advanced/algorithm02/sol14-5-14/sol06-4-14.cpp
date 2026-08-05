// sol14-5-14.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
    string answer = "";
    stack<int> deleted; // 삭제행 인덱스 저장

    // 각 행 위아래 행인덱스 저장
    vector<int> up, down;

    // 임시공간 포함한 위치 인덱스 초기화
    for (int i = 0; i < n + 2; i++) {
        // 삭제 명령어면
        if (cmd[i][0] == 'C') { // 삭제 명령처리

        }
        else if (cmd[i][0] == 'Z') {// 복구 명령처리

        }
        else { // D, U 시작하는 명령처리
            int sz = stoi(cmd[i].substr(2));    //"D 2", "U 3", "D 4"

            if (cmd[i][0] == 'U') { // U -> 위로 이동
            
            }
            else if (cmd[i][0] == 'D') {// D -> 아래로 이동
                for (int j = 0; j < sz; j++) {
                    k = down[k]; // k가 2일때 가상환경 떄문 1 추가, 2만큼 반복하면 k = 5
                }

            }

        }
    }

    // 삭제된 행의 위치에 'X' 표시, 그 외는 '0' 표시하는 문자열
    answer.append(n, '0');
    while (!delete.empty()) {
        // delted.top()들어있는 값은 가상공간을 늘려고 인덱스가 증가된 상태기 때문에
        // -1을 해야 실제 인덱스로 바뀜
        answer[delete]
    }

    k++;
    return answer;
}

int main()
{
    cout << "표 편집\n";

    // result = "0000X000"
    vector<string> cases1 = { "D 2", "C", "U 3", "D 4", "C", "U 2", "Z", "Z" };

    string result1 = solution(8, 2, cases1);

    cout << "" << endl;
}   

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
