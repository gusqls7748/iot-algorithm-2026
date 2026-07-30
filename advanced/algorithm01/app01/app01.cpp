// app01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	int a = 13;
	int b = 4;

	// 일반 연산
	cout << a + b << endl; //17
	cout << a - b << endl; //9
	cout << a * b << endl; //52
	cout << a / b << endl; //3
	cout << a % b << endl; //1
	cout << -a << endl; //-13

	// 비교연산
	cout << (a == b) << endl; // 0 false
	cout << (a != b) << endl; // 1 true
	cout << (a > b) << endl; // 1 
	cout << (a < b) << endl; // 0 
	cout << (a >= b) << endl; // 1 
	cout << (a <= b) << endl; // 0 

	// 비트 연산
	cout << (a & b) << endl; // 13 / 2		1101
	cout << (a | b) << endl; // 1101 | 0100 -> 1101(13)

	cout << "부동소수 연산" << endl;
	double d = 2.5;
	float f = 1.5f;

	cout << sizeof(d) << "byte" << endl; // 8 byte
	cout << sizeof(f) << "byte" << endl; // 4 byte

	cout << d << " " << f << endl; //2.5 1.5
	cout << d + f << endl; //4
	cout << d - f << endl; //1
	cout << d * f << endl; //3.75
	cout << d / f << endl; //1.6667

	// 형변환
	cout << "형 변환" << endl;

	int i = 65;
	f = 5.2f;

	// 암시적 현변환(메모리가 큰 변수로 변경)
	// 수정: 이미 선언된 d이므로 앞에 double을 지워줍니다.
	d = i + f;	// i + f (일단 float 변경) -> double 할당(double 변경)
	cout << d << endl;  // 70.2

	// 명시적 형변환 double -> int
	d = static_cast<double>(i - 5);
	cout << d << endl; // 65

	// 명시적 형변환 int -> char
	cout << static_cast<char>(i) << endl; // 'A'

	// 문자열 
	cout << "문자열 사용" << endl;

	string str1;	// 빈 문자열
	string str2 = "Hello, C++!"; // 문자열 초기화
	string str3(str2); // 문자열 복사
	string str4(str2, 0, 5); // Hello 복사
	string str5(10, '*');	// ******

	// 문자열 찾기
	cout << "문자열 찾기" << endl;

	string str = "Hello, C++ World";

	//Hello 문자열 찾기
	size_t pos1 = str.find("Hello");
	cout << pos1 << endl;		// 0

	// 'C' char 찾기
	size_t pos2 = str.find('C');
	cout << pos2 << endl;	// 7

	// 시작 인덱스 지정하고 Hello 조회
	size_t start_index = 2; // 1부터 시작해서 찾기
	size_t pos3 = str.find("Hello", start_index);
	cout << pos3 << endl;		// 18446744073709551615 -> 인덱스를 찾을수없음

	// 존재하지 않는 문자열 조회
	size_t pos4 = str.find("Python");
	cout << pos4 << endl;	// 18446744073709551615 -> Python은 문자열에 없음

	// 문자열 추가, 수정
	str = "APPLE";
	str += ", World!";	//문자열 추가
	cout << str << endl;	// APPLE, World!

	str[7] = 'P';	// W -> p
	cout << str << endl;	// APPLE, Porld!

	str.replace(7, 4, "Col"); // 7번째 인덱스 글자부터 4글자를 COl로 변경
	//str.replace(7, 3, "Co"); // 7번째
	cout << str << endl;

	return 0;


}
