// sol12-2-47.cpp : 백트래킹

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(int N) {
    vector<vector<int>> answer;

    return answer;
}

int main() {
    cout << "백트래킹\n";

    cout << "테스트케이스 1" << endl;
    auto result1 = solution(5);

    for (auto it : result1) {
        for (auto st : it) {
            cout << st << ". ";
        }
        cout << endl;
    }

    cout << "테스트케이스 2" << endl;
    auto result2 = solution(2);

    for (auto it : result2) {
        for (auto st : it) {
            cout << st << ". ";
        }
        cout << endl;
    }

    cout << "테스트케이스 3" << endl;
    auto result3 = solution(7);

    for (auto it : result3) {
        for (auto st : it) {
            cout << st << ". ";
        }
        cout << endl;
    }

}
