// app02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
// 4. find 함수의 헤더
#include <algorithm>

using namespace std;

void modify(int value){
    value = 10;
    cout << "주소 : " << &value << endl;  // 0000
    cout << "값   : " << value << endl;

    // 함수가 종료되면 value는 메모리에서 사라짐
}

void modifyByCall(int value) {
    value = 10;
    cout << "2. 주소 : " << &value << endl;  // 0000
    cout << "2. 값   : " << value << endl;

    // 함수가 종료되면 value는 메모리에서 사라짐
}

void modifyByReference(int& value) {
    value = 15;
    cout << "4. 주소 : " << &value << endl;  // 0000
    cout << "4. 값   : " << value << endl;

    // 함수가 종료되면 value는 메모리에서 사라짐
}

int main() {
    // 상수 레퍼런스
    // `Call by value` vs `Call by reference`
    // 컨테이너 객체, 구조체를 Call by value로 넘기면 성능에 지대한 영향
    int value = 5;
    cout << "1. 주소 : " << &value << endl;   // 00000
    cout << "1. 값   : " << value << endl;   // 5

    modifyByCall(value);
    cout << "3. 주소 : " << &value << endl;   // 00000
    cout << "3. 값   : " << value << endl;   // 5

    modifyByReference(value);
    cout << "5. 주소 : " << &value << endl;   // 00000
    cout << "5. 값   : " << value << endl;   // 5

    // 2. auto문 -> javascript, C#의 var 와 동일
    auto num = 42;  // int로 추론
    cout << num << endl;

    auto pi = 3.141592;  //double로 추론
    cout << pi << endl;

    auto greeting = string("Hello C++!"); // string으로 추론
    cout << greeting << endl;

    // 3. 범위기반 반보굼ㄴ foreach, for in
    // 컨테이너 등에서 모든 원소를 반복적 순회

    // vector : 1차원 배열
    vector<int> vec = { 1,2,3,4,5 };
    for (int num : vec) {
        cout << num << ". ";
    }
    cout << endl;

    // map : Dictionary
    map<string, int> fruitMap = { {"apple", 1},{"banana", 2},{"mango", 3}, {"cherry", 4} };
    for (const auto& pair : fruitMap) {
        cout << pair.first << " => " << pair.second << ". ";
    }
    cout << endl;

    // set : 집합
    cout << "집합" << endl;

    // 수정: 변수명을 fruitSet으로 변경
    set<string> fruitSet = { "apple" , "banana", "mango", "cherry" , "banana" };

    for (const auto& fruit : fruitSet) {
        cout << fruit << ". ";
    }
    cout << endl;

    // 반복자 - vector, map, set 등 컨테이너를 종류와 관계없이 원소 순회 접근가능하도록 처리
    vector<int> vec2 = { 10,20,30,40,50,60,70,80,90,100 };

    // 반복자 순회
    for (auto it = vec2.begin(); it != vec2.end(); ++it) {
        cout << *it << ". ";
    }
    cout << endl;

    // 탐색
    auto result = find(vec2.begin(), vec2.end(), 40);
    if (result != vec2.end()) {
        cout << "Found : " << *result << endl; // Found : 40
    }
    else {
        cout << "Not found." << endl;
    }

    // 역방향 반복자
    for (auto it = vec2.rbegin(); it != vec2.rend(); ++it) {
        cout << *it << ". ";
    }
    cout << endl;

    // fruitMap 순회
    for (auto it = fruitMap.begin(); it != fruitMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    //원소 탐색
    auto result2 = fruitMap.find("mango");
    if (result2 != fruitMap.end()) {
        cout << "Found : " << result2->first << "=> " << result2->second << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    return 0;
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
