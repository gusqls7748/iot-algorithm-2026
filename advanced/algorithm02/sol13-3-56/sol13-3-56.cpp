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

