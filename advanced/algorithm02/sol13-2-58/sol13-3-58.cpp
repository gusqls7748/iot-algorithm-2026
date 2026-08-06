// sol13-3-58.cpp : K 번째 수
//
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (const auto& cmd : commands) {
        int i = cmd[0];
        int j = cmd[1];
        int k = cmd[2];

        // 1. array의 i번째부터 j번째까지 잘라 새로운 vector 생성
        // (1번째가 인덱스 0이므로, i번쨰는 array.begin() + i - 1)
        // (j번째까지 포함하기 위해 끝 범위를 array.begin() + j로 지점)
        vector<int> temp(array.begin() + i - 1, array.begin() + j);

        // 2.잘라낸 배열 오름차순 정렬
        sort(temp.begin(), temp.end());

        // 3. 정렬된 배열의 k번째 수(인덱스로는 k -1)를 결과에 추가
        answer.push_back(temp[k - 1]);
    }

    return answer;
}

int main()
{
    // 1.문제의 입출력 예시데이터 생성
    vector<int> array = { 1,5,2,6,3,7,4 };
    vector<vector<int>> commands = { {2,5,3},{4,4,1}, {1,7,3} };

    // 2. solution 함수 호출
    vector<int> result = solution(array, commands);

    // 3. 결과 출력 ( 기대값: [5,6,3])
    cout << "결과: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : ",");
    }
    cout << "]" << endl;

    return 0;
}

