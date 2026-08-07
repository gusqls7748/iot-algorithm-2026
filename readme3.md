## 정렬

- 정렬 : 사용자가 정의한 순서로 데이터를 나열한 것

- 필요한 이유: 데이터를 쉽게 찾을 수 있어서

- 삽입 정렬 : 전체 영역에서 정렬된 영역과 정렬되지 않은 영역 나누고 정렬 되지 않은 값을
정렬된 영역의 위치로 놓으며 정렬하는것
    - 시간 복잡도: O(N^2)
- 병합 정렬 : 정렬되지 않은 영역을 쪼개서 각각의 영역을 정렬하고 이를 합치며 정렬하는것(분할 정복)
핵심: 병합할 때 부분 정렬하는 부분을 어떻게 구현하는가?
    - 포인터: 특정 배열의 원소를 가리키는 화살표
    - 시간 복잡도: 

- 정수 내림차순으로 배치하기: 621p
[소스](./advanced/algorithm02/sol13-3-56/sol13-3-56.cpp)

```markdown
// sol13-3-56.cpp : 정수 내림차순으로 배치하기 621p
//

#include <iostream>
#include <vector>
#include <algorithm> // sort 함수 사용을 위해 필요
#include <string>

using namespace std;

long long solution(long long n) {
    //1. 숫자를 문자열로 변환
    string str = to_string(n);

    // 2.문자열을 내림차순( 큰거 부터 작은 순)으로 정렬
    sort(str.begin(), str.end(), greater<char>());

    // 정렬된 문자열을 long long형태의 숫자로 변환하여 반환
    return stoll(str);
}

int main()
{
    //테스트
    long long n = 118372;

    //solution 함수를 호출하고 결과를 출력합니다.
    long long result = solution(n);
    cout << "입력: " << n << "-> 결과: " << result << endl;

    return 0;
}


```

- K번쨰 수: 623p
[소스](./advanced/algorithm02/sol13-2-58/sol13-3-58.cpp)

```markdown
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


```